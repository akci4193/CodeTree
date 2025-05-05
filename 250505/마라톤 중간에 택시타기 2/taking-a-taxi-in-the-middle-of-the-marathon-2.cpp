#include <iostream>

using namespace std;

int n;
int x[100];
int y[100];

int main() 
{
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        cin >> x[i] >> y[i];
    }

    int minDistance = 1e9;

    for (int j = 1; j < n -1; j++)
        {
            int distance = 0;
            int x2 = x[0];
            int y2 = y[0];
            for(int k = 0; k < n; k++)
            {
                if (k == j) continue;
                distance += abs(x2 - x[k]) + abs(y[k] - y2);
                x2 = x[k], y2 = y[k];
            }

            minDistance = min(distance , minDistance);
        }

    cout << minDistance;

    // Please write your code here.

    return 0;
}