#include <iostream>

using namespace std;

int n, k;
int arr[100];

int main() 
{
    cin >> n >> k;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    int maxCount = 0;
    for(int i = 0; i <= n - k; i++) 
    {
        int count = 0;
        for(int j = i; j < i + k; j++)
            count += arr[j];
    
        maxCount = max(maxCount, count);
    }
    
    cout << maxCount;

    // Please write your code here.

    return 0;
}