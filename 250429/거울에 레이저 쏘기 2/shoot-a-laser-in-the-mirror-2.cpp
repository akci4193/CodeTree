#include <iostream>
#include <vector>

using namespace std;

int n;
char grid[1000][1000];
int k;

int main() 
{
    cin >> n;

    int grid2[n][n] = {};
    vector<pair<pair<int,int>, int>> a;

    int dx[4] = {0, 1, 0, -1}; int dy[4] = {1, 0, -1, 0};
    int dirNum = 0;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cin >> grid[i][j];
            
            a.push_back({{x,y}, dirNum+1});
            int nx = x + dx[dirNum];
            int ny = y + dy[dirNum];

            
            if (nx < 0 || nx >= n || ny < 0 || ny >= n) // 회전
            {
                dirNum = (dirNum + 1) % 4;
                a.push_back({{x,y}, dirNum+1});
                nx = x + dx[dirNum];
                ny = y + dy[dirNum];
            }
            //cout << nx << ' ' << ny << ' ' <<endl;
            x = nx;
            y = ny;
        }
    }

    cin >> k;
    // \는 0에서는 1 , 1에서는 0 2에서는 3 3에서는 2
    // /는 0에서는 3. 1에서는 2 2에서는 1 3에서는 0
    dirNum = a[k-1].second;
    x = a[k-1].first.first, y = a[k-1].first.second;    
    //cout << x << ' ' << y << ' ' << dirNum << ' ' <<  endl;
    int count = 0;
    for (int i = 0; i < n * n; i++) 
    {
        if (grid[x][y] == '\\')
        {
            if (dirNum == 0)
                dirNum = 1;
            else if (dirNum == 1)
                dirNum = 0;
            else if (dirNum == 2)
                dirNum = 3;
            else
                dirNum = 2;
        }
        else if (grid[x][y] == '/')
        {
            if (dirNum == 0)
                dirNum = 3;
            else if (dirNum == 1)
                dirNum = 2;
            else if (dirNum == 2)
                dirNum = 1;
            else
                dirNum = 0;
        }
            
        count++;    

        int nx = x + dx[dirNum];
        int ny = y + dy[dirNum];

        //cout << nx << ' ' << ny << ' ' <<endl;
        if (nx < 0 || nx >= n || ny < 0 || ny >= n) 
        {
            break;
        }

        x = nx;
        y = ny;

    }

    cout << count;
    // Please write your code here.

    return 0;
}