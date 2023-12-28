#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;
void solve();

void solve()
{
    ll m, k, a1, ak;
    cin >> m >> k >> a1 >> ak;
    ll res = m % k;
    // if (res <= ak)
    // {
    //     m = m - (res * k);
    // }
    // else
    //     m -= (ak * k);

    m = m - (ak * k);

    if (m < 0)
        m = res;
    m -= a1;
    if (m <= 0)
        cout << 0 << endl;
    else
    {
        ll left = m / k;
        ll rem = m % k;
        ll gap = INT_MAX;
        if (rem != 0)
            gap = k - rem;
        if (gap <= a1)
            left++;
        else
            left = left + rem;

        cout << left << endl;
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
