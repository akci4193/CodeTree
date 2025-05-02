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

    for(int i = 0; i < 1; i++)
    {
        for(int j = 0; j < C - 4; j++)
        {
            char color1 = grid[0][j]; 
            if (color1 == grid[R-1][C-1]) continue;
            for (int k = i+1; k < R-2; k++)
            {
                for (int l = j+1; l < C-2; l++)
                {
                    char color2 = grid[k][l];
                    if (color1 == color2) continue;

                    for (int o = k+1; o < R-1; o++)
                    {
                        for (int p = l+1; p < C-1; p++)
                        {
                            char color3 = grid[o][p];
                            if (color2 == color3) continue;
                            
                            for (int x = o+1; x < R; x++)
                            {
                                for (int y = p+1; y < C; y++)
                                {
                                    char color4 = grid[x][y];
                                    if (color3 == color4) continue;
                                        
                                    if (x == R-1 && y == C-1)
                                    {
                                        count++;
                                        //cout << i << ' ' << j << ' ' << k << ' ' << l << ' ' << o << ' ' << p << endl;
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