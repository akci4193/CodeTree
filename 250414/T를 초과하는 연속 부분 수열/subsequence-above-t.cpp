#include <iostream>

using namespace std;

int n, t;
int arr[1000];

int main() 
{
    cin >> n >> t;

    int maxCount = 0;
    int count = 0;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];

        if(arr[i] <= t || (i == 0))
        {
            maxCount = max(maxCount, count);
            count = 0;
        }
        else
            count++;

    }

    cout << maxCount;

    

    // Please write your code here.

    return 0;
}