#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;
void solve();

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> v;

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
                v.push_back(2);
            }
            else
            {
                v.push_back(1);
            }
        }
        else if (a == '1')
        {
            if (c == '1')
            {
                v.push_back(2);
            }
            else
            {
                v.push_back(1);
            }
        }
        else
        {
            if (c == '1')
            {
                v.push_back(0);
            }
            else
            {
                v.push_back(3);
            }
        }
    }

    long long ans = 1;

    for (auto val : v)
    {
        ans *= val;
        ans %= mod;
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}