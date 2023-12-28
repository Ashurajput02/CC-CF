// jai shree ram
#include <iostream>
#include <numeric>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;
void solve();

void solve()
{
    int x, y, k;
    cin >> x >> y >> k;
    if (x == y)
    {
        cout << x + y << endl;
        return;
    }

    else
    {
        for (int i = 0; i < k; ++i)
        {

            int a = std::gcd(x, y);
            cout << "gcd is=" << a << endl;
            if (x > y)
                x = a;
            else
                y = a;

            if (x == y)
            {
                // cout << x + y << endl;
                break;
            }

            int b = std::lcm(x, y);

            if (x > y)
                x = b;
            else
                y = b;

            if (x == y)
            {
                // cout << x + y << endl;
                break;
            }
        }
        cout << x + y << endl;
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