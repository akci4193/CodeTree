#include <iostream>

using namespace std;

int N, K;
int candy[100], pos[100];

int main() 
{
    cin >> N >> K;

    int maxPos = 0;
    for (int i = 0; i < N; i++) 
    {
        cin >> candy[i] >> pos[i];
        maxPos = max(maxPos, pos[i]);
    }

    int placed[maxPos+1] = {};

    for(int i = 0; i < N; i++)
    {
        placed[pos[i]] += candy[i];
    }
    
    int max_cnt = 0;
    for(int i = 0; i <= maxPos; i++) 
    {
        int num = 0;
        for(int j = i; j <= i + K * 2 && j <= maxPos; j++)
        {
            if (placed[j] == 0) continue;
            num += placed[j];
            //cout << num << ' ' << j << ' ' << endl;
        }
            
    
        max_cnt = max(max_cnt, num);
    }
    
    cout << max_cnt;

    // Please write your code here.

    return 0;
}