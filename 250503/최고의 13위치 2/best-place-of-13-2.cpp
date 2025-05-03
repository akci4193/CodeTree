#include <iostream>

using namespace std;

int N;
int arr[20][20];

int main() 
{
    cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) cin >> arr[i][j];

    int grid = 0;
    int x = 0;
    int y = 0;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N-2; j++)
        {
            if (grid < arr[i][j] + arr[i][j+1] + arr[i][j+2])
            {
                grid = arr[i][j] + arr[i][j+1] + arr[i][j+2];
                x = i;
                y = j;
            }
        }
    }

    arr[x][y] = -1;
    arr[x][y+1] = -1;
    arr[x][y+2] = -1;

    int grid2 = 0;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N-2; j++)
        {
            if (arr[i][j] == -1 || arr[i][j+1] == -1 || arr[i][j+2] == -1) continue;
            if (grid2 < arr[i][j] + arr[i][j+1] + arr[i][j+2])
            {
                grid2 = arr[i][j] + arr[i][j+1] + arr[i][j+2];
            }
        }
    }


    cout << grid + grid2;
    // Please write your code here.

    return 0;
}