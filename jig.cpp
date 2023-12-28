#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;
void solve();

void solve()
{
    int n, k;
    cin >> n >> k;
    n = n / 2;
    vector<int> a;
    int mn_o = 1, mx_o = 99999;
    int mn_e = 2, mx_e = 100000;
    int sm_e = k - n * 1;
    if (sm_e <= 0)
        return void(cout << -1 << endl);
    for (int i = 0; i < n - 1; i++)
    {
        if (sm_e - mx_e >= (n - i - 1) * 2)
        {
            a.push_back(mx_e);
            sm_e -= mx_e;
        }
        else
        {
            a.push_back(2);
            sm_e -= 2;
        }
    }
    if (sm_e > 0)
    {
        if (sm_e % 2 == 1)
            sm_e++;
        a.push_back(min(sm_e, mx_e));
    }
    int sm_o = k - accumulate(a.begin(), a.end(), 0LL);
    if (sm_o <= 0)
        return void(cout << -1 << endl);

    for (int i = 0; i < n - 1; i++)
    {
        if (sm_o - mx_o >= (n - i - 1) * 1)
        {
            a.push_back(mx_o);
            sm_o -= mx_o;
        }
        else
        {
            a.push_back(1);
            sm_o -= 1;
        }
    }
    if (sm_o % 2 == 0)

        return void(cout << -1 << endl);
    a.push_back(sm_o);

    if (*max_element(a.begin(), a.end()) > 100000 || a.size() < 2 * n)
        return void(cout << -1 << endl);

    for (int i : a)
        cout << i << " ";
    cout << endl;
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