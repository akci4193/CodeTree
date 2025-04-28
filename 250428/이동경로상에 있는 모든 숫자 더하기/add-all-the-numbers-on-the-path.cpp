#include <iostream>
#include <string>

using namespace std;

int N, T;
string str;
int board[100][100];

int main() 
{
    cin >> N >> T;
    cin >> str;

    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            cin >> board[i][j];
        }
    }

    int dx[4] = {0, 1, 0, -1}; int dy[4] = {1, 0, -1, 0};
    int x = (N-1)/2, y = (N-1)/2;

    int sum = board[x][y];
    
    int dirNum = 3; 
    for (int i = 0; i < str.size(); i++) 
    {
        
        if (str[i] == 'R')
            dirNum = (dirNum + 1) % 4;
        else if (str[i] == 'L')
            dirNum = (dirNum + 3) % 4;
        else
        {
            int nx = x + dx[dirNum];
            int ny = y + dy[dirNum];

            

            if (nx < 0 || nx >= N || ny < 0 || ny >= N) 
            {
                continue;
            }
            else 
            {
                //cout << nx << ' ' << ny << ' ' << endl;
                //cout << board[nx][ny] << endl;
                sum += board[nx][ny];
            }

            x = nx;
            y = ny;
            
        }        
        
        
    }
    

    

    

    cout << sum;

    // Please write your code here.

    return 0;
}