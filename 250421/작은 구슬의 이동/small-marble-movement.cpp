#include <iostream>

using namespace std;

int n, t;
int r, c;
char d;

int main() 
{
    cin >> n >> t;
    cin >> r >> c >> d;

    // Please write your code here.

    int dx[4] = {0, 1, 0, -1}; int dy[4] = {1, 0, -1, 0};
    int x = r-1, y = c-1;

    int dirNum = -1; 
    if (d == 'R')
        dirNum = 0;
    else if (d == 'D')
        dirNum = 1;
    else if (d == 'L')
        dirNum = 2;
    else
        dirNum = 3;

    for (int j = 0; j < t; j++) 
    {
        int nx = x + dx[dirNum];
        int ny = y + dy[dirNum];

        if (nx < 0 || nx >= n || ny < 0 || ny >= n) 
        {
            dirNum = (dirNum + 2) % 4;
        }
        else 
        {
            x = nx;
            y = ny;
        }
    }

    cout << x+1 << ' ' << y+1;

    return 0;
}