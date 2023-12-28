// #include <iostream>
// #include <bits/stdc++.h>
// #define ll long long
// #define mod 1000000007
// jai shree ram
// using namespace std;
// void solve();

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<ll> a;
//     for (ll i = 0; i < n; i++)
//     {
//         ll x;
//         cin >> x;
//         a.push_back(x);
//     }
//     sort(a.begin(), a.end(), greater<ll>());
//     vector<ll> b;
//     for (ll i = 1; i <= n; i++)
//     {
//         b.push_back(i);
//     }
//     // return b;
//     for (ll i = 0; i < n; i++)
//     {
//         cout << b[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> ash;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ash.push_back({x, i});
    }

    sort(ash.begin(), ash.end());
    ll p = n;
    for (ll i = 0; i < n; i++)
    {
        ash[i].first = p;
        p--;
    }
    ll ans[n];
    for (ll i = 0; i < n; i++)
    {
        ans[ash[i].second] = ash[i].first;
    }
    for (ll i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
