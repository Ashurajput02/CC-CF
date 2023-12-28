#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    w(t)
    {
        int flag = 0;
        vector<int> b;
        int x, y, n;
        cin >> x >> y >> n;
        vector<int> a;
        a.push_back(y);

        for (int i = 1; i < n - 1; i++)
        {
            y = y - i;
            a.push_back(y);
        }
        a.push_back(x);
        for (int i = 0; i < n - 1; i++)
        {
            b.push_back(a[i + 1] - a[i]);
        }
        for (int i = 0; i < n - 2; i++)
        {
            if (b[i + 1] >= b[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            for (int i = n - 1; i >= 0; i--)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}