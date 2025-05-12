#include <iostream>
#include <string>

using namespace std;

string A;

int main() 
{
    cin >> A;

    int count = 0;
    for (int i = 0; i < A.size()-1; i++)
    {
        if (A[i] == '(' && A[i+1] == '(')
        {
            for (int j = i; j < A.size()-1; j++)
            {
                if (A[j] == ')' && A[j+1] == ')')
                    count++;
            }

        }
        
        
    }

    cout << count;
    // Please write your code here.

    return 0;
}