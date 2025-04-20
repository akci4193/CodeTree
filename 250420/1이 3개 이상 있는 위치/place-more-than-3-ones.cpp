#include <iostream>

using namespace std;

int n;
int grid[100][100];

int main() 
{
    cin >> n;

    int result = 0;
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};
    int x = 0, y = 0;

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cin >> grid[i][j];
        }
    }
    
    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            int count = 0;
            for (int k = 0; k < 4; k++)
            {
                
                int nx = i + dx[k];
                int ny = j + dy[k];    

                if (0 <= nx && nx < 5 && 0 <= ny && ny < 5)
                {
                    //cout << nx << ' ' << ny << endl;
                    if (grid[nx][ny] == 1)
                        count++;
                    
                    if (count >= 3)
                    {
                        result++;
                        break;
                    }
                        
                }

                
            }
        }
    }
    cout << result;
    // Please write your code here.

    return 0;
}