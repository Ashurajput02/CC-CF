#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;
void solve();

void solve()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < 2 * n; i++)
    {
        int k;
        cin >> k;
        a.push_back(k);
    }
    sort(a.begin(), a.end());
    // for (int i = 0; i < 2 * n; i++)
    //     cout << a[i] << " ";
    vector<pair<int, int>> ash;
    for (int i = 0; i < n; i++)
    {
        pair<int, int> jig;
        jig.first = a[i];
        jig.second = a[i + n];
        ash.push_back(jig);
    }

    int diff = 0;
    for (int i = 0; i < n; i++)
    {
        if (i + 1 == n)
        {
        }
        else
            diff += abs(ash[i + 1].first - ash[i].first) + abs(ash[i + 1].second - ash[i].second);
    }
    cout << diff << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ash[i].first << " " << ash[i].second << endl;
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