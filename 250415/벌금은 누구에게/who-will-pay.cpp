#include <iostream>

using namespace std;

int N, M, K;
int student[10000];

int main() 
{
    cin >> N >> M >> K;

    int students[N] = {};
    for (int i = 0; i < M; i++) 
    {
        cin >> student[i];
        
        students[student[i] -1]++;

        if (students[student[i] -1] >= K)
        {
            cout << student[i];
            return 0;
        }

    }

    // Please write your code here.

    return 0;
}