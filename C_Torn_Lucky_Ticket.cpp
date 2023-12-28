#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;
void solve();

pair<int, int> f(int x)
{
    int ans = 0;
    int cnt = 0;
    while (x)
    {
        ans += x % 10;
        cnt++;
        x /= 10;
    }
    return {ans, cnt};
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    unordered_map<int, unordered_map<int, int>> dp;
    for (int i : a)
    {
        auto [sum, cnt] = f(i);
        dp[cnt][sum]++;
    }
    int ans = 0;
    for (auto i : a)
    {
        auto [sum, cnt] = f(i);
        string s = to_string(i);
        for (auto f : {0, 1})
        {
            int cur = 0;
            for (int i = 0; i < s.size(); i++)
            {
                cur += (f ? s[i] : s.end()[-i - 1]) - '0';
                int r = s.size() - (i + 1);
                int sz = (i + 1) - r;
                int sm = cur - (sum - cur);
                if (sm > 0 && sz > 0)
                    ans += dp[sz][sm];
            }
        }
    }
    for (auto i : dp)
        for (auto &[j, v] : i.second)
            ans -= v * v;
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