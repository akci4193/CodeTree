#include <iostream>

#define SIZE 50000
using namespace std;

int n, m;
int t[50000];
char d[50000];
int t_b[50000];
char d_b[50000];

int main() 
{
    cin >> n >> m;

    int aCount[SIZE] = {};
    int bCount[SIZE] = {};

    int index = 0;
    for (int i = 0; i < n; i++) 
    {
        cin >> t[i] >> d[i];

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
        cin >> t_b[i] >> d_b[i];

        int delta = d_b[i] == 'R' ? 1 : -1;

        for (int j = 0; j < t_b[i]; j++)
        {
            if (i == 0 && j == 0)
                bCount[index2] = delta;
            else
                bCount[index2] = bCount[index2 -1] + delta;

            index2++;
        }
    }

    int count = 0;

    int maxIndex = max(index, index2);
    for (int i = 0; i <maxIndex ; i++)
    {
        if (i == maxIndex)
            break;

        int a = (i < index) ? aCount[i] : aCount[index-1];
        int b = (i < index2) ? bCount[i] : bCount[index-1];
        //cout << a << " " << b << endl;
        if (a == b)
        {
            //cout << aCount[i] << " " << bCount[i] << " " << i << endl;
            if (i != 0 && aCount[i-1] != bCount[i-1])
                count++;
        }
        
    } 

    cout << count;

    // Please write your code here.

    return 0;
}