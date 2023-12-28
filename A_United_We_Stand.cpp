
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solver();
using ll = long long;

void solver();

void solver(vector<ll> &a)
{
    ll n = a.size();
    vector<ll> b;
    vector<ll> c;
    sort(a.begin(), a.end());
    if (a[0] == a[a.size() - 1])
    {

        cout << -1 << endl;
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == a[(a.size() - 1)])
                c.push_back(a[i]);
            else
                b.push_back(a[i]);
        }
        cout << b.size() << " " << c.size() << endl;

        for (ll i = 0; i < b.size(); i++)
            cout << b[i] << " ";
        cout << endl;

        for (ll i = 0; i < c.size(); i++)
            cout << c[i] << " ";
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<ll> a;
        ll n;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a.push_back(x);
        }
        solver(a);
    }
    return 0;
}
