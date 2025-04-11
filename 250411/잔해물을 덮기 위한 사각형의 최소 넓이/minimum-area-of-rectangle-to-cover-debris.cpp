#include <iostream>

#define OFFSET 1000
#define SIZE 2001

using namespace std;

int x1[2], y1[2];
int x2[2], y2[2];

int main() 
{
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];

    int maxX = 0;
    int maxY = 0;
    int minX = OFFSET;
    int minY = OFFSET;

    int a[SIZE * SIZE] ={};

    for (int i = 0; i < 2; i++) 
    {
        maxX = max(x2[0] , x2[1]);
        maxY = max(y2[0] , y2[1]);
        minX = min(x1[0], x1[1]);
        minY = min(y1[0], y1[1]);

        for (int j = x1[i] + OFFSET; j < x2[i] + OFFSET; j++) 
        {
            for (int k = y1[i] + OFFSET; k < y2[i] + OFFSET; k++)
            {
                a[j * SIZE + k] = i + 1; 
            }
        }
    }

    int rowMaxCount = 0;
    int colMaxCount = 0;
    int rowMinCount = SIZE;
    int colMinCount = SIZE;

    for (int i = minX + OFFSET; i < maxX + OFFSET; i++) 
    {
        for (int j = minY + OFFSET; j < maxY + OFFSET; j++)
        {
            if (a[i * SIZE + j] == 1)
            {
                rowMaxCount = max(rowMaxCount , i);
                colMaxCount = max(colMaxCount , j);
                rowMinCount = min(rowMinCount, i);
                colMinCount = min(colMinCount, j);
            }
        }
    }

    if (rowMinCount != SIZE)
        cout << (rowMaxCount+1 - rowMinCount) * (colMaxCount+1 - colMinCount);

    //cout << rowMaxCount << rowMinCount;
    
    // Please write your code here.

    return 0;
}