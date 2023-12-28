#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib>
#define ll long long
#define mod 1000000007

using namespace std;
void solve();

void solve()
{
    int x, y, k;
    cin >> x >> y >> k;

    int diff = 0;
    int s1 = 0;
    if (y > x)
    {
        diff = y - x;
        if (k <= diff)
            s1 = y + diff - k;
        else
            s1 = y;
        cout << s1 << endl;
    }

    else if (y < x)
    {
        diff = x;
        s1 = diff;
        cout << s1 << endl;
    }
    else
    {
        s1 = x;
        cout << s1 << endl;
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