#include <iostream>
#include <vector>

using namespace std;

int n;
char grid[1000][1000];
int k;

int main() 
{
    cin >> n;

    vector<pair<pair<int,int>, int>> a;

    int dx[4] = {0, 1, 0, -1}; int dy[4] = {1, 0, -1, 0};
    int dirNum = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cin >> grid[i][j];

            if (i == 0 || i == n-1 || j ==0 || j == n-1) // 외곽
            {
                if ((i == 0 || i == n - 1) && (j == 0 || j == n - 1)) // 꼭짓점
                {
                    if (!(i == 0 && j == 0))
                        a.push_back({{i,j}, dirNum});
                    
                    //cout << i << ' ' << j << ' ' << endl;
                    dirNum = (dirNum+1) % 4;
                }
                a.push_back({{i,j}, dirNum});
            }
        }
    }

    cin >> k;

    dirNum = a[k-1].second;
    int x = a[k-1].first.first, y = a[k-1].first.second;    
    int count = 0;
    for (int i = 0; i < n * n; i++) 
    {
        if (grid[x][y] == '/')
            dirNum = (dirNum + 1) % 4;
        else if (grid[x][y] == '\n')
            dirNum = (dirNum + 3) % 4;

        count++;    

        int nx = x + dx[dirNum];
        int ny = y + dy[dirNum];

        if (nx < 0 || nx >= n || ny < 0 || ny >= n) 
        {
            //cout << nx << ' ' << ny << ' ' <<endl;
            break;
        }

        x = nx;
        y = ny;

    }

    cout << count;
    // Please write your code here.

    return 0;
}