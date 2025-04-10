#include <iostream>

#define OFFSET 100
#define INDEX_SIZE 201
#define SIZE 8

using namespace std;

int N;
int x[100], y[100];

int main() 
{
    cin >> N;

    int maxX = 0;
    int maxY = 0;
    int minX = OFFSET;
    int minY = OFFSET;

    int a[INDEX_SIZE * INDEX_SIZE] ={};

    for (int i = 0; i < N; i++) 
    {
        cin >> x[i] >> y[i];

        maxX = max(maxX , x[i]);
        maxY = max(maxY , y[i]);
        minX = min(minX, x[i]);
        minY = min(minY, y[i]);

        for (int j = x[i] + OFFSET; j < x[i] + OFFSET + SIZE; j++) 
        {
            for (int k = y[i] + OFFSET; k < y[i] + OFFSET + SIZE; k++)
            {
                a[j * INDEX_SIZE + k] = 1;
            }
        }
    }

    int count = 0;

    for (int i = minX + OFFSET; i < maxX + OFFSET + SIZE; i++) 
    {
        for (int j = minY + OFFSET; j < maxY + OFFSET + SIZE; j++)
        {
            if (a[i * INDEX_SIZE + j] == 1)
                count++;
        }
    }

    cout << count;
    

    // Please write your code here.

    return 0;
}