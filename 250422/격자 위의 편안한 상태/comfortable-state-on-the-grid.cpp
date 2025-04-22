#include <iostream>

using namespace std;

int N, M;
int r[10000], c[10000];

int main() 
{
    cin >> N >> M;

    int matrix[N * N] = {};

    int dx[4] = {0, 1, 0, -1}; int dy[4] = {1, 0, -1, 0};

    for (int i = 0; i < M; i++) 
    {
        cin >> r[i] >> c[i];
        matrix[c[i] + r[i] * c[i]]++;
        
        if (i > 2)
        {
            int count = 0;
            for (int j = 0; j < 4; j++)
            {
                int nx = r[i] + dx[j];
                int ny = c[i] + dy[j];

                if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
                else if (matrix[ny + nx * ny] != 0)
                {
                    count++;
                }
                
            }
            if (count == 3)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else
            cout << 0 << endl;
    }

    // Please write your code here.

    return 0;
}