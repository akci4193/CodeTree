#include <iostream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

int N, M;
int A[100];

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) cin >> A[i];

    vector<int> B(M);
    for (int i = 0; i < M; i++) cin >> B[i];

    sort(B.begin(), B.end());

    set<string> permutations;

    do 
    {
        string s = "";
        for (int n : B) 
        {
            s += to_string(n) + " ";
        }
        permutations.insert(s);
    } 
    while (next_permutation(B.begin(), B.end()));

    int count = 0;

    for (int i = 0; i <= N - M; i++) 
    {
        string s = "";
        for (int j = 0; j < M; j++) 
        {
            s += to_string(A[i + j]) + " ";
        }
        if (permutations.count(s)) 
        {
            count++;
        }
    }

    cout << count;
    return 0;
}
