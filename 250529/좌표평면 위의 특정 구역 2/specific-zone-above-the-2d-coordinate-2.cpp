#include <iostream>

using namespace std;

int N;
int x[100], y[100];

int main() 
{
    cin >> N;

    int minCount = 1e9;
    for (int i = 0; i < N; i++) 
    {
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < N; i++)
    {
        int minX = 40000;
        int maxX = 0;
        int minY = 40000;
        int maxY = 0;
        for (int j = 0; j < N; j++)
        {
            if (j == i) continue;
            minX = min(minX, x[j]);
            maxX = max(maxX, x[j]);
            minY = min(minY, y[j]);
            maxY = max(maxY, y[j]);
        }
        minCount = min(minCount, (maxX-minX) * (maxY - minY)); 
        
    }

    cout << minCount;
    // Please write your code here.

    return 0;
}