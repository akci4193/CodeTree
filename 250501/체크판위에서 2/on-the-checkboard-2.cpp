#include <iostream>

using namespace std;

int R, C;
char grid[15][15];

int main() 
{
    cin >> R >> C;
    int count = 0;
    for (int i = 0; i < R; i++) 
    {
        for (int j = 0; j < C; j++) 
        {
            cin >> grid[i][j];
        }
    }

    char color = ' ';
    for(int i = 0; i < 1; i++)
    {
        for(int j = 0; j < C - 3; j++)
        {
            if (i == 0)
            {
                if (grid[i][j] == 'W')
                    color = 'W';
                else
                    color = 'B';
            }

            for (int k = i+1; k < R-2; k++)
            {
                for (int l = j+1; l < C-2; l++)
                {
                    if (grid[k][l] != color)
                    {
                        for (int o = k+1; o < R-1; o++)
                        {
                            for (int p = l+1; p < C-1; p++)
                            {
                                color = grid[k][l];
                                if (grid[o][p] != color)
                                {
                                    //cout << ' ' << o << ' ' << p << endl;
                                    for (int x = o+1; x < R; x++)
                                    {
                                        for (int y = p+1; y < C; y++)
                                        {
                                            color = grid[o][p];
                                            if (grid[x][y] != color)
                                            {
                                                if (x == R-1 && y == C-1)
                                                    count++;
                                            }
                                        }
                                    }
                                }
                                

                            }
                        }
                    }
                }
            }
        }
    }

    cout << count;
    // Please write your code here.

    return 0;
}