#include <iostream>
#include <string>

using namespace std;

string commands;

int main() 
{
    cin >> commands;

    int matrix[2000] = {};
    int count = 0;
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};
    int nx = 0, ny = 0;
    int dirNum = 3; 
    for (int i = 0; i < commands.size(); i++) 
    {
        if (commands[i] == 'L')
        {
            dirNum--;
            if (dirNum < 0)
                dirNum = 3;
        }
        else if (commands[i] == 'R')
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

        
        count++;

        if (nx == 0 && ny == 0)
        {
            cout << count;
            return 0;
        }

        //cout << nx << ' ' << ny << ' ' << dirNum << endl;
    }

    cout << -1;
    // Please write your code here.

    return 0;
}