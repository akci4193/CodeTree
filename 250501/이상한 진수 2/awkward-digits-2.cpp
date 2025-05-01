#include <iostream>

using namespace std;

string a;

int main() 
{
    cin >> a;

    int maxVal = 0;
    int len = a.length();

    for (int i = 0; i < len; ++i) 
    {
        string flipped = a;

        flipped[i] = (a[i] == '1') ? '0' : '1';

        int val = stoi(flipped, nullptr, 2);

        if (val > maxVal) 
        {
            maxVal = val;
        }
    }

    cout << maxVal << endl;

    return 0;
}