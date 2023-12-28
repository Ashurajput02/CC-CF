// jai shree ram
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;
void solve();

void solve()
{
    ll n;
    cin >> n;
    ll a[n], b[n];
    ll suma = 0, sumb = 0;
    ll minb = 1e9 + 1;
    ll mina = 1e9 + 1;

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        suma = suma + a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        mina = min(mina, a[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
        sumb = sumb + b[i];
    }

    for (ll i = 0; i < n; i++)
    {
        minb = min(minb, b[i]);
    }
    ll jig = n * minb;
    ll sim = n * mina;
    ll ans1 = suma + jig;
    ll ans2 = sumb + sim;
    ll ans = min(ans1, ans2);
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