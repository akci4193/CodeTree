#include <iostream>

using namespace std;

int n;
int grid[100][100];

int main() 
{
    cin >> n;

    // Please write your code here.

    int dx[4] = {0, -1, 0, 1}; int dy[4] = {1, 0, -1, 0};
    int x = n/2, y = n/2;

    int matrix[n][n] = {};

    int count = 1;
    int dirNum = 0; 
    int step = 1;

    matrix[x][y] = count++;
    
    while (count <= n * n) 
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < step; j++) 
            {
                x += dx[dirNum];
                y += dy[dirNum];

                if (x < 0 || x >= n || y < 0 || y >= n) continue; 
                matrix[x][y] = count++;
            }
            dirNum = (dirNum + 1) % 4; 
        }
        step++; 
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
