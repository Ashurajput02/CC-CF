
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 998244353

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {

        ll l, r;
        cin >> l >> r;

        ll temp = l;
        ll a = 2;

        ll b = (l % 2);

        if (b == 0)
        {
            b = 2;
        }

        l -= b;
        b = l;
        if (b == 0)
        {
            b += 2;
        }
        if (a + b >= l && a + b <= r)
        {
            cout << a << " " << b << endl;
        }
        else
        {
            // cout<<"-1"<<endl;

            a = -1;
            for (ll j = 2; (j * j) <= temp; j++)
            {

                if ((temp) % j == 0)
                {
                    a = j;
                    b = temp - j;
                    break;
                }
            }

            if (a == -1)
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << a << " " << b << endl;
            }
        }
    }
    return 0;
}