
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            if (abs(a[i]) > abs(a[mx]))
            {
                mx = i;
            }
        }
        vector<pair<int, int>> ops;
        for (int i = 0; i < n; i++)
        {
            if (i != mx)
            {
                ops.emplace_back(i, mx);
            }
        }
        if (a[mx] > 0)
        {
            for (int i = 0; i < n - 1; i++)
            {
                ops.emplace_back(i + 1, i);
            }
        }
        else
        {
            for (int i = n - 1; i > 0; i--)
            {
                ops.emplace_back(i - 1, i);
            }
        }
        cout << ops.size() << '\n';
        for (auto &op : ops)
        {
            cout << op.first + 1 << " " << op.second + 1 << '\n';
        }
    }
    return 0;
}