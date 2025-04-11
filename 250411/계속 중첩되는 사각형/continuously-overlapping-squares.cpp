#include <iostream>

#define OFFSET 100
#define SIZE 200

using namespace std;

int n;
int x1[10], y1[10];
int x2[10], y2[10];

int main() 
{
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    }

    int maxX = 0;
    int maxY = 0;
    int minX = OFFSET;
    int minY = OFFSET;

    int a[SIZE * SIZE] ={};

    for (int i = 0; i < n; i++) 
    {
        maxX = max(maxX , x2[i]);
        maxY = max(maxY , y2[i]);
        minX = min(minX, x1[i]);
        minY = min(minY, y1[i]);

        for (int j = x1[i] + OFFSET; j < x2[i] + OFFSET; j++) 
        {
            for (int k = y1[i] + OFFSET; k < y2[i] + OFFSET; k++)
            {
                a[j * SIZE + k] = (i) % 2 + 1; // 1 빨 2 파
            }
        }
    }

    int count = 0;
    for (int i = minX + OFFSET; i < maxX + OFFSET; i++) 
    {
        for (int j = minY + OFFSET; j < maxY + OFFSET; j++)
        {
            if (a[i * SIZE + j] == 2)
            {
                count++;
            }
        }
    }
    cout << count;

    // Please write your code here.

    return 0;
}