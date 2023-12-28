#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
const int N = 2e5 + 5;
const int M = 998244353;
int f[N];
using namespace std;
void solve();

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || s[i] != s[i + 1])
            a.push_back(0);
        a.back()++;
    }
    int a1 = 0, a2 = 1;
    for (auto &i : a)
    {
        if (i > 1)
        {
            a1 += i - 1;
            (a2 *= i) %= M;
        }
        cout << a1 << " " << (a2 * f[a1] % M) << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    f[0] = 1;
    for (int i = 0; i < N; i++)
        f[i] = (f[i - 1] * i) % M;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}