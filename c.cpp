#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;

    for (int i = 0; i < x.size(); i++)
    {
        int digit = x[i] - '0';
        int invert = 9 - digit;

        // First digit ko 0 nahi bana sakte
        if (i == 0 && invert == 0)
        {
            continue;
        }

        // Jo digit chhoti hai, usko rakho
        if (invert < digit)
        {
            x[i] = char(invert + '0');
        }
    }

    cout << x;

    return 0;
}