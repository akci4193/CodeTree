#include <iostream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

int N, M;
int A[100];

int main() 
{
    cin >> N >> M;

    for (int i = 0; i < N; i++) cin >> A[i];

    vector<int> B(M);
    for (int i = 0; i < M; i++) cin >> B[i];

    sort(B.begin(), B.end());

    int count = 0;

    for (int i = 0; i <= N - M; i++) 
    {
        vector<int> subA(A + i, A + i + M);
        sort(subA.begin(), subA.end());  // 정렬하여 B와 비교
        if (subA == B) count++;
    }

    cout << count;
    return 0;
}
