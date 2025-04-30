#include <iostream>

using namespace std;

int n;
int A[100];

int main() 
{
    cin >> n;
    int sumMin = 1e9;
    for (int i = 0; i < n; i++) 
    {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += A[j] * abs(i - j);
        }
        sumMin = min(sumMin, sum);
    }

    // Please write your code here.
    cout << sumMin;
    return 0;
}