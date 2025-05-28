#include <iostream>

using namespace std;

int abilities[6];

int GetDiff(int i, int j, int k) 
{
    int sum1 = abilities[i] + abilities[j] + abilities[k];
    int sum2 =  0;
    for(int p = 0; p < 6; p++)
        sum2 += abilities[p];
    sum2 -= sum1;
    return abs(sum1 - sum2);
}


int main() 
{
    for (int i = 0; i < 6; i++) 
    {
        cin >> abilities[i];
    }

    int min_diff = 100;
    for(int i = 0; i < 6; i++)
        for(int j = i + 1; j < 6; j++)
            for (int k = j + 1; k < 6; k++)
                min_diff = min(min_diff, GetDiff(i, j,k));
    
    cout << min_diff;
    
    return 0;
}