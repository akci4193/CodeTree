#include <iostream>

using namespace std;

int n;
int numbers[100];

int main() 
{
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        cin >> numbers[i];
    }

    if (n < 2) 
    {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 0; i < n; ++i) 
    {
        cin >> numbers[i];
    }

    int maxSum = 0;
    for (int i = 0; i < n; ++i) 
    {
        for (int j = i + 2; j < n; ++j) 
        {
            int currentSum = numbers[i] + numbers[j];
            if (currentSum > maxSum) 
            {
                maxSum = currentSum;
            }
        }
    }

    cout << maxSum << endl;

    // Please write your code here.

    return 0;
}