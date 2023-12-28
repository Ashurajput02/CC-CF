#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;
void solve();

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b)
    {
        cout << 0 << endl;
    }
    else
    {
        int cnt = 0;
        int maxm = max(a, b);
        int minm = min(a, b);
        while (maxm > minm)
        {
            maxm = maxm - c;
            minm = minm + c;
            cnt++;
        }
        cout << cnt << endl;
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
