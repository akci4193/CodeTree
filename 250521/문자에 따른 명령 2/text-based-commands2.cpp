#include <iostream>

using namespace std;

string dirs;

int main() 
{
    cin >> dirs;


    int count = 0;
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};
    int nx = 0, ny = 0;
    int dirNum = 3; 
    for (int i = 0; i < dirs.size(); i++) 
    {
        if (dirs[i] == 'L')
        {
            dirNum--;
            if (dirNum < 0)
                dirNum = 3;
        }
        else if (dirs[i] == 'R')
        {
            dirNum++;
            if (dirNum > 3)
                dirNum = 0;
        }
        else
        {
            nx += dx[dirNum];
            ny += dy[dirNum];
        }
    }

    cout << nx << ' ' << ny;

    
    // Please write your code here.

    return 0;
}