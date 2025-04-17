#include <iostream>

#define SIZE 1000
using namespace std;

int N, M;
int v[1000], t[1000];
int v2[1000], t2[1000];

int main() {
    cin >> N >> M;

    int index = 0;

    int aCount[SIZE * N] = {};

    for (int i = 0; i < N; i++)
    {
        cin >> v[i] >> t[i];

        for (int j = 0; j < t[i]; j++)
        {
            if (i == 0 && j == 0)
                aCount[index] = v[i];
            else
                aCount[index] = aCount[index -1] + v[i];

            index++;
        }
    }

    int bCount[SIZE * N] = {};

    int index2 = 0;
    for (int i = 0; i < M; i++) 
    {
        cin >> v2[i] >> t2[i];

        for (int j = 0; j < t2[i]; j++)
        {
            if (i == 0 && j == 0)
                bCount[index2] = v2[i];
            else
                bCount[index2] = bCount[index2 -1] + v2[i];

            index2++;
        }
    }
    
    int count = 0;
    int head = 0;
    for (int i = 0; i < index +1 ; i++)
    {
        if (i == index)
            break;

        if (aCount[i] == bCount[i] && head != 3)
        {
            head = 3;
            count++;
        }
        else if (aCount[i] > bCount[i] && head != 1)
        {
            head = 1;
            count++;
        }
        else if (aCount[i] < bCount[i] && head != 2)
        {
            head = 2;
            count++;
        }

        
    } 

    cout << count;
    // Please write your code here.

    return 0;
}