#include <iostream>
#include <bits/stdc++.h>
const int INF = -1;
#define ll long long
#define mod 1000000007

using namespace std;
void solve();

void solve()
{
    int n;
    cin >> n;
    int d[n], s[n], rez = INF;
    for (int i = 0; i < n; i++)
    {
        cin >> d[i] >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 3)
        {
            if (s[i] % 2 == 1)
                rez = min(rez, d[i] + (s[i] / 2));
            else
            {
                rez = min(rez, d[i] + (s[i] / 2 - 1));
            }
        }
        else
        {
            rez = min(rez, d[i]);
        }
        cout << rez << endl;
    }
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