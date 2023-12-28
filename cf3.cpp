#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> ash;

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
                ash.push_back(2);
            }
            else
            {
                ash.push_back(1);
            }
        }
        else if (a == '1')
        {
            if (c == '1')
            {
                ash.push_back(2);
            }
            else
            {
                ash.push_back(1);
            }
        }
        else
        {
            if (c == '1')
            {
                ash.push_back(0);
            }
            else
            {
                ash.push_back(3);
            }
        }
    }

    long long final = 1;

    for (int i = 0; i < ash.size(); i++)
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
