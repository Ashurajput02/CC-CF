#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ash[10 ^ 5];
    int test = 0;
    for (int i = 2; i < n; i += 2)
    {
        char a, b, c;
        a = s[i - 2];
        b = s[i - 1];
        c = s[i];
        if (a != b)
        {
            if (c == '1')
            {
                ash[test++] = 2;
            }
            else
            {
                ash[test++] = 1;
            }
        }
        else if (a == '1')
        {
            if (c == '1')
            {
                ash[test++] = 2;
            }
            else
            {
                ash[test++] = 1;
            }
        }
        else
        {
            if (c == '1')
            {
                ash[test++] = 0;
            }
            else
            {
                ash[test++] = 3;
            }
        }
    }

    long long final = 1;

    for (int i = 0; i < test; i++)
    {
        final = (final * ash[i]) % 10000000007;
    }

    cout << final << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
