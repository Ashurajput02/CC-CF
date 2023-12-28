// JAI BAJARANG BALI

// manitianajay45

// give me some  sunshine, give me some rain, give me another chance to grow up once again....

// sab moh maya h....

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

        ll n, x, y;
        cin >> n >> x >> y;
        ll lcm = __gcd(x, y);
        lcm = (x * y) / lcm;

        ll common = (n / lcm);
        x = n / x;
        y = n / y;
        x -= common;
        y -= common;

        // cout<<x<<" "<<y<<endl;

        ll ans = 0;

        // for(ll i=1;i<=y;i++){
        //     ans-=i;
        // }

        ans -= ((y * (y + 1)) / 2);

        ans += ((x * (2 * n + 1 - x)) / 2);

        cout << ans << endl;
    }
    return 0;
}