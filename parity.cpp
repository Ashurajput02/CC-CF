#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
int f[];
using namespace std;
void solve();

void solve()
{
    int n, k, co = 0, cz = 0;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
        co += (i % 2 == 1);
        cz += (i % 2 == 0);
    }
    if (k == 0 && cz > 0 && co > 0)
    {
        cout << 0 << endl;
        return;
    }
    if (k == 1 && abs(co - cz) > 1)
    {
        cout << 0 << endl;
        return;
    }
    int ans = f[co] + f[cz] % mod;
    if (k == 1 && co == cz)
        ans = ans * 2 % mod;
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