#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;
void solve();

void solve()
{
    void solve()
    {
        int n, q;
        cin >> n >> q;
        pf.clear();
        primeFactors(n);
        map<int, int> mp;
        for (int i = 0; i < pf.size(); i++)
        {
            mp[pf[i]]++;
        }
        while (q--)
        {
            int p;
            cin >> p;
            int ans = 1;
            for (auto x : mp)
            {
                int cnt = 1;
                for (int i = 0; i < x.second; i++)
                {
                    int chk = (p + 1) * i;
                    if (chk == i + x.second)
                    {
                        cnt++;
                    }
                }
                ans *= cnt;
            }
            cout << ans << endl;
        }
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