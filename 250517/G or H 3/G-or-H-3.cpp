#include <iostream>

using namespace std;

int N, K;
int x[100];
char c[100];

int main() 
{
    cin >> N >> K;

    int placed[10001] = {};

    for (int i = 0; i < N; i++) 
    {
        cin >> x[i] >> c[i];
    }

    for(int i = 0; i < N; i++)
    {
        if (c[i] == 'G')
            placed[x[i]] = 1;
        else
            placed[x[i]] = 2;

    }
    
    int max_cnt = 0;
    for(int i = 1; i <= 10000 - K + 1; i++) 
    {
        int num = 0;
        for(int j = i; j <= i + K; j++)
        {
            num += placed[j];
            //cout << num << ' ' << j << ' ' << endl;
        }
            
    
        max_cnt = max(max_cnt, num);
    }
    
    cout << max_cnt;

    // Please write your code here.

    return 0;
}