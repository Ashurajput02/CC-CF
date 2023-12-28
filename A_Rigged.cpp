#include <iostream>
#include <bits/stdc++.h>

#include <vector>
#define ll long long
#define mod 1000000007

using namespace std;
void solve();

void solve()
{
    vector<pair<int, int>> a;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        pair<int, int> b;
        int c;
        int d;
        cin >> c >> d;
        b.first = c;
        b.second = d;
        a.push_back(b);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i].first << " " << a[i].second << " ";
    // }

    int max = a[0].first;
    vector<pair<int, int>> final;
    final.push_back(a[0]);
    for (int i = 1; i < n; i++)
    {
        if (max <= a[i].first)
            final.push_back(a[i]);
    }
    //  cout << endl;

    // for (int i = 0; i < final.size(); i++)
    // {
    //     cout << final[i].first << " " << final[i].second << " ";
    // }

    int maxer = final[0].second;
    int j = 0;
    pair<int, int> jig;
    jig.first = final[0].first;
    jig.second = final[0].second;
    for (int i = 1; i < final.size(); i++)
    {
        if (maxer <= final[i].second)
        {
            jig.first = final[i].first;
            jig.second = final[i].second;
            j = i;
            break;
        }
    }
    // cout << jig.first << " " << jig.second;
    if (jig.first != final[0].first)
    {
        cout << -1 << endl;
    }
    else if (j != 0)
        cout << -1 << endl;
    else
    {
        cout << final[0].first - 1 << endl;
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