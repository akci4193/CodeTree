#include <iostream>

using namespace std;

int n, m;

int main() 
{
    cin >> n >> m;

    // Please write your code here.

    
    int dx[4] = {0, -1, 0, 1}; int dy[4] = {1, 0, -1, 0};
    int x = 0, y = 0;

    int matrix[n][m] = {};

    int count = 1;
    int dirNum = 3; 
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) 
        {
            matrix[x][y] = count++;
            int nx = x + dx[dirNum];
            int ny = y + dy[dirNum];

            //cout << nx << ' ' << ny << ' ' << n << ' ' << m << ' ' << endl;
            if (nx < 0 || nx >= n || ny < 0 || ny >= m || matrix[nx][ny] != 0) 
            {
                dirNum = (dirNum + 1) % 4;
                nx = x + dx[dirNum];
                ny = y + dy[dirNum];
            }

            x = nx;
            y = ny;

            //cout << x << ' ' << y << ' ' << endl;

        }

    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) 
        {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}