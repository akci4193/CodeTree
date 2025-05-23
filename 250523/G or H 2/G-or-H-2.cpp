#include <iostream>

using namespace std;

int N;
int pos[100];
char alpha[100];

int main() 
{
    cin >> N;

    char placed[10001] = {};
    for (int i = 0; i < N; i++) 
    {
        cin >> pos[i] >> alpha[i];
    }

    for(int i = 0; i < N; i++)
    {
        if (alpha[i] == 'G')
            placed[pos[i]] = 'G';
        else
            placed[pos[i]] = 'H';

    }
    
    int max_cnt = 0;
    for(int i = 0; i <= 10000; i++) 
    {
        int num = 0;
        int g = 0;
        int h = 0;
        for(int j = i; j <= 10000; j++)
        {
            if (placed[i] == 0 || placed[j] == 0) continue;

            if (placed[j] == 'G')
                g++;
            else if (placed[j] == 'H')
                h++;

            if (g == 0 || h == 0 || g == h)
            {
                num = j-i;
            }
                        
            //cout << num << ' ' << j << ' ' << endl;
        }
            
        max_cnt = max(max_cnt, num);
    }
    
    cout << max_cnt;

    // Please write your code here.

    return 0;
}