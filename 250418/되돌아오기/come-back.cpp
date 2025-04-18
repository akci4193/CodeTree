#include <iostream>

using namespace std;

int N;
char dir[100];
int dist[100];

int main() 
{
    cin >> N;

    int matrix[2000] = {};
    int count = 0;
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};
    int nx = 0, ny = 0;
    for (int i = 0; i < N; i++) 
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


            if (nx == 0 && ny == 0)
            {
                cout << count;
                return 0;
            }
        }
    }

    cout << -1;

    // Please write your code here.

    return 0;
}