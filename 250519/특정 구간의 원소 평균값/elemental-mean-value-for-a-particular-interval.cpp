#include <iostream>

using namespace std;

int n;
int arr[100];

int main() 
{
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++) 
    {
        int sum = 0;
        for (int j = i; j < n; j++) 
        {
            sum += arr[j];
            int len = j - i + 1;
            if (sum % len != 0) continue;
            int avg = sum / len;
            for (int k = i; k <= j; k++) 
            {
                if (arr[k] == avg) 
                {
                    count++;
                    break;
                }
            }
        }
    }

    cout << count << endl;

    // Please write your code here.

    return 0;
}