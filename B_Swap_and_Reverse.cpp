#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{

    ll n, k, oddCnt = 0, evenCnt = 0, size;
    string s;
    cin >> n >> k;
    cin >> s;
    size = (ll)s.size();
    vector<char> odd, even;
    for (ll i = 0; i < size; i++)
    {
        if (i % 2 == 0)
            odd.push_back(s[i]);
        else
            even.push_back(s[i]);
    }
    if (k % 2 == 0)
    {
        sort(s.begin(), s.end());
        cout << s;
    }
    else
    {
        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        for (ll i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                cout << odd[oddCnt++];
            }
            else
            {
                cout << even[evenCnt++];
            }
        }
    }

    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}