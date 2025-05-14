#include <iostream>
#include <string>

using namespace std;

int n;
string str;

int main() {
    cin >> n;
    cin >> str;

    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if (str[i] != 'C') continue;
        for(int j = i + 1; j < n; j++)
        {
            if (str[j] != 'O') continue;
            for(int k = j + 1; k < n; k++)
            {
                if (str[k] != 'W') continue;
                count++;
            }
        }
    }

    cout << count;
        

    // Please write your code here.

    return 0;
}