#include <iostream>

using namespace std;

int N, S;
int arr[100];

int main() {
    cin >> N >> S;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    int minCount = 1e9;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int count = 0;
            for(int k = 0; k < N; k++)
            {
                if (k == i || k == j) continue;
                count += arr[k];
            }
            minCount = min(abs(S -count) , minCount);
        }
    }
    // Please write your code here.
    cout << minCount;
    return 0;
}