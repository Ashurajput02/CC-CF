#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;
void solve();

void solve()
{
    int x, y;

    cin >> x >> y;
    if (x / y >= 20)
        cout << "20" << endl;
    else
        cout << (x / y) << endl;
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