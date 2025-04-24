#include <iostream>

using namespace std;

int n, m;

int main() 
{
    cin >> n >> m;

    int dx[4] = {0, 1, 0, -1}; int dy[4] = {1, 0, -1, 0};
    int x = 0, y = 0;

    int matrix[n][m] = {};

    int count = 1;
    int dirNum = 0; 
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) 
        {
            if (count <= 'Z')
                matrix[x][y] = count++;
            else
                count = 0;


            int nx = x + dx[dirNum];
            int ny = y + dy[dirNum];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m || matrix[nx][ny] != 0) 
            {
                dirNum = (dirNum + 1) % 4;
                nx = x + dx[dirNum];
                ny = y + dy[dirNum];
            }

            x = nx;
            y = ny;

        }

    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) 
        {
            cout << (char)(matrix[i][j] +'A' - 1)<< ' ';
        }
        cout << endl;
    }

    // Please write your code here.

    return 0;
}
