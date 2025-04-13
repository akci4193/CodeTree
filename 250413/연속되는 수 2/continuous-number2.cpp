#include <iostream>

using namespace std;

int N;
int arr[1000];

int main() 
{
    cin >> N;

    int maxCount = 0;
    int count = 0;
    for (int i = 0; i < N; i++) 
    {
        cin >> arr[i];
        
        if(i != 0 && arr[i] != arr[i - 1])
        {
            maxCount = max(maxCount, count);
            count = 0;
        }

        count++;

    }

    maxCount = max(maxCount, count);

    cout << maxCount;

    // Please write your code here.

    return 0;
}