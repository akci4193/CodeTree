#include <iostream>

using namespace std;

int N;
int a1, b1, c1;
int a2, b2, c2;

bool isClose(int x, int y) 
{
    int diff = abs(x - y);
    return diff <= 2 || diff >= N - 2;
}


int main() 
{
    cin >> N;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;

    int cnt = 0;

    for (int i = 1; i <= N; i++) 
    {
        for (int j = 1; j <= N; j++) 
        {
            for (int k = 1; k <= N; k++) 
            {
                bool open1 = isClose(i, a1) && isClose(j, b1) && isClose(k, c1);
                bool open2 = isClose(i, a2) && isClose(j, b2) && isClose(k, c2);
                if (open1 || open2) cnt++;
            }
        }
    }

    cout << cnt << endl;

    
    // Please write your code here.

    return 0;
}