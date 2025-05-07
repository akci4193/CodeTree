#include <iostream>

using namespace std;

int board[19][19];

int main() 
{
    for (int i = 0; i < 19; i++)
        for (int j = 0; j < 19; j++) cin >> board[i][j];

    int value = 0;
    int count = 0;
    int x = 0, y = 0;
    for (int i = 0; i < 19; i++)
    {
        for (int j = 0; j < 19; j++) // 가로
        {
            if (i + j > 18) break;
            if (value != board[i][j])
            {
                value = board[i][j];
                count = 0;
                x = 0, y = 0;
            }
            
            if (board[i][j] == 0)
                continue;
            count++;
                
            if (count == 3)
                x = i, y = j;
            else if (count == 5)
            {
                cout << value << endl;
                cout << x+1 << ' ' << y+1 << endl;
                return 0;

            }
        }
        count = 0;
        value = 0;

        for (int j = 0; j < 19; j++) // 세로
        {
            if (i + j > 18) break;
            if (value != board[j][i])
            {
                value = board[j][i];
                count = 0;
                x = 0, y = 0;
            }
            
            if (board[j][i] == 0)
                continue;
            count++;
            if (count == 3)
                x = j, y = i;
            else if (count == 5)
            {
                cout << value << endl;
                cout << x+1 << ' ' << y+1 << endl;
                return 0;

            }
        }
        count = 0;
        value = 0;

        for (int j = 0; j < 19; j++) // 왼쪽->오른쪽 대각 1
        {
            if (i + j > 18) break;
            if (value != board[i+j][j])
            {
                value = board[i+j][j];
                count = 0;
                x = 0, y = 0;
            }
            
            if (board[i+j][j] == 0)
                continue;
            count++;
            if (count == 3)
                x = i+j, y = j;
            else if (count == 5)
            {
                cout << value << endl;
                cout << x+1 << ' ' << y+1 << endl;
                return 0;

            }
        }
        count = 0;
        value = 0;
        for (int j = 1; j < 19; j++) // 왼쪽->오른쪽 대각 2
        {
            if (i + j > 18) break;
            if (value != board[j][i+j])
            {
                value = board[j][i+j];
                count = 0;
                x = 0, y = 0;
            }
            
            if (board[j][i+j] == 0)
                continue;
            count++;
            if (count == 3)
                x = j, y = i+j;
            else if (count == 5)
            {
                cout << value << endl;
                cout << x+1 << ' ' << y+1 << endl;
                return 0;

            }
        }
    }

    for (int i = 18; i > 0; i--)
    {
        for (int j = 0; j < 19; j++) // 오른쪽 -> 왼쪽 대각 1
        {
            if (i - j < 0) break;
            if (value != board[i-j][j])
            {
                value = board[i-j][j];
                count = 0;
                x = 0, y = 0;
            }
            
            if (board[i-j][j] == 0)
                continue;
            count++;
            if (count == 3)
                x = i-j, y = j;
            else if (count == 5)
            {
                cout << value << endl;
                cout << x+1 << ' ' << y+1 << endl;
                return 0;
            }
        }
        count = 0;
        value = 0;
        for (int j = 1; j < 19; j++) // 오른쪽 -> 왼쪽 대각 2
        {
            if (i - j < 0) break;
            if (value != board[j][j + 18 - i])
            {
                value = board[j][j + 18 - i];
                count = 0;
                x = 0, y = 0;
            }
            
            if (board[i][j + 18 - i] == 0)
                continue;
            count++;
            if (count == 3)
                x = i, y = j + 18 - i;
            else if (count == 5)
            {
                cout << value << endl;
                cout << x+1 << ' ' << y+1 << endl;
                return 0;
            }
        }
    }

    cout << 0;
    // Please write your code here.

    return 0;
}