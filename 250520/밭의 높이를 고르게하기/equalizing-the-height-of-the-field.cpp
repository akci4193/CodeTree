#include <iostream>

using namespace std;

int N, H, T;
int arr[100];

int main() 
{
    cin >> N >> H >> T;
    for (int i = 0; i < N; i++) 
    {
        cin >> arr[i];
    }

    int minCost = 1e9;

    for (int i = 0; i <= N - T; i++) 
    {
        int cost = 0;
        for (int j = i; j < i + T; j++) 
        {
            cost += abs(arr[j] - H);
        }
        minCost = min(minCost, cost);
    }

    cout << minCost << endl;

    // Please write your code here.

    return 0;
}