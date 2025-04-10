#include <iostream>

#define OFFSET 1000

using namespace std;

int x1[3], y1[3];
int x2[3], y2[3];

int a[4000000] = {};


int main() 
{
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];
    cin >> x1[2] >> y1[2] >> x2[2] >> y2[2];



    int count = 0;

    int maxX = max(x2[0] , x2[1]);
    int maxY = max(y2[0] , y2[1]);
    int minX = min(x1[0], x1[1]);
    int minY = min(y1[0], y1[1]);

    for (int i = x1[0] + OFFSET; i< x2[0] + OFFSET; i++)
    {
        for (int j = y1[0] + OFFSET; j < y2[0] + OFFSET; j++)
        {
            a[i *OFFSET + j] = 1;
        }
    }

    for (int i = x1[1] + OFFSET; i< x2[1] + OFFSET; i++)
    {
        for (int j = y1[1] + OFFSET; j < y2[1] + OFFSET; j++)
        {
            a[i *OFFSET + j] = 1;
        }
    }

    for (int i = x1[2] + OFFSET; i< x2[2] + OFFSET; i++)
    {
        for (int j = y1[2] + OFFSET; j < y2[2] + OFFSET; j++)
        {
            a[i *OFFSET + j] = 2;
        }
    }

    for (int j = minX + OFFSET ; j < maxX + OFFSET; j++)
    {
        for (int k = minY + OFFSET; k < maxY + OFFSET; k++)
        {
            if (a[j *OFFSET + k] != 1)
                continue;

            count++;
            a[j *OFFSET + k] = 1;
            
        }
    }

    cout << count;
    // Please write your code here.

    return 0;
}