#include <iostream>
#include <string>

using namespace std;

string A;

int main() 
{
    cin >> A;
    int count = 0;

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] != '(')
            continue;
        
        for (int j = i; j < A.size(); j++)
        {
            if (A[j] == ')')
                count++;
        }
    }

    cout << count;
    // Please write your code here.

    return 0;
}