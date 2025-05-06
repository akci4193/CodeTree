#include <iostream>

using namespace std;

int n;
int a[1003];

int main() 
{
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    int minSum = 1e9;

    for (int i = 0; i < n; i++) 
    {
        int sum = 0;
        int count = i;
        for (int j = 0; j < n; j++)
        {
            //cout << a[count] * j << ' ' << j << ' ' << i << endl;
            sum += a[count] * j;
            count++;
            if (count % n == 0)
                count = 0;

        }
        minSum = min(minSum , sum);
    }


    cout << minSum;
    // Please write your code here.

    return 0;
}