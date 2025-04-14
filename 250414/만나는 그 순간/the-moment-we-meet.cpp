#include <iostream>

#define SIZE 1000
using namespace std;

int n, m;
char d[SIZE];
int t[SIZE];
char d2[SIZE];
int t2[SIZE];

int main() 
{
    cin >> n >> m;

    int aCount[SIZE] = {};
    int bCount[SIZE] = {};

    int index = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> d[i] >> t[i];

        int delta = d[i] == 'R' ? 1 : -1;
        for (int j = 0; j < t[i]; j++)
        {
            if (i == 0 && j == 0)
                aCount[index] = delta;
            else
                aCount[index] = aCount[index -1] + delta;

            index++;
        }
        
    } 
    
    int index2 = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> d2[i] >> t2[i];

        int delta = d2[i] == 'R' ? 1 : -1;
        for (int j = 0; j < t2[i]; j++)
        {
            if (i == 0 && j == 0)
                bCount[index2] = delta;
            else
                bCount[index2] = bCount[index2 -1] + delta;

            index2++;
        }
    }

    //cout << aCount[5] << bCount[5];
    for (int i = 0; i < SIZE; i++)
    {
        if (i == index)
            break;
        if (aCount[i] == bCount[i])
        {
            cout << i+1;
            return 0;
        }
        
        
    } 

    cout << -1;
    
    // Please write your code here.

    return 0;
}