// jai shree ram
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> ash, jig;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ash.push_back(x);
        }
        for (int i = 0; i < n; i++)
            jig.push_back(0);
        sort(ash.begin(), ash.end());
        int sim = ash[0], anv = 0;
        jig[0] = 1;
        while (true)
        {
            anv = lower_bound(ash.begin() + anv + 1, ash.end(), sim + 1) - ash.begin();
            if (anv >= n)
                break;
            jig[anv] = 1;
            sim = sim + ash[anv];
        }
        int sum = 0;
        for (int i = 0; i < jig.size(); ++i)
            sum = sum + jig[i];
        int tashu = n - sum;
        cout << tashu << endl;
        for (int i = 0; i < n; i++)
            if (jig[i] != 0)
                cout << ash[i] << " ";
        for (int i = 0; i < n; i++)
            if (jig[i] == 0)
                cout << ash[i] << " ";
        cout << endl;
    }
}
