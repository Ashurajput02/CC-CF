#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i = 0;
        while (i < (64))
        {
            char c;
            cin >> c;
            if (c != '.')
                cout << c;
            i++;
        }
        //
        cout << endl;
    }
}
