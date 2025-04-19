#include <iostream>

using namespace std;

int n;
char dir[100];
int dist[100];

int main() 
{
    cin >> n;
    int count = 0;
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};
    int nx = 0, ny = 0;
    for (int i = 0; i < n; i++) 
    {
        cin >> dir[i] >> dist[i];

        int dirNum = -1; 
        if (dir[i] == 'E')
            dirNum = 0;
        else if (dir[i] == 'S')
            dirNum = 1;
        else if (dir[i] == 'W')
            dirNum = 2;
        else
            dirNum = 3;

        for (int j = 0; j < dist[i]; j++) 
        {
            count++;
            nx += dx[dirNum];
            ny += dy[dirNum];
        }
    }

    cout << nx << ' ' << ny;

    // Please write your code here.

    return 0;
}