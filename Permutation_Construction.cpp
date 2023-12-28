// #include <iostream>
// #include <bits/stdc++.h>
// #define ll long long
// #define mod 1000000007

// using namespace std;
// void solve();

// void solve()
// {
//     int n, x;
//     cin >> n >> x;
//     if (x == (n + 1) / 2 && n % 2 == 1)
//     {
//         cout << -1 << endl;
//         return;
//     }
//     int f = min(x, n - x + 1);
//     vector<int> a(n);
//     int count = 1;
//     for (int i = 0; i < n; i++)
//     {
//         a[i] = count++;
//     }

//     for (int i = 0; i < f / 2; i++)
//     {
//         int temp = a[i];
//         a[i] = a[f - i - 1];
//         a[f - i - 1] = temp;
//     }

//     for (int i = n - f; i < (n - f + f / 2); i++)
//     {

//         int temp = a[i];
//         a[i] = a[n - 1 - (i - (n - f))];
//         a[n - 1 - (i - (n - f))] = temp;
//     }

//     if (a[0] != x)
//         swap(a[0], a[n - 1]);

//     for (int i = 0; i < n; i++)
//         cout << a[i] << " ";
//     cout << endl;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
// }

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
        int n, sim;
        cin >> n >> sim;

        if (sim == (n + 1) / 2 && n % 2 == 1)
        {
            cout << -1 << endl;
            continue;
        }

        int jig = min(sim, n - sim + 1);
        vector<int> ash(n);
        int anv = 1;

        for (int i = 0; i < n; i++)
        {
            ash[i] = anv++;
        }

        for (int i = 0; i < jig / 2; i++)
        {
            int temp = ash[i];
            ash[i] = ash[jig - i - 1];
            ash[jig - i - 1] = temp;
        }

        for (int i = n - jig; i < (n - jig + jig / 2); i++)
        {
            int temp = ash[i];
            ash[i] = ash[n - 1 - (i - (n - jig))];
            ash[n - 1 - (i - (n - jig))] = temp;
        }

        if (ash[0] != sim)
            swap(ash[0], ash[n - 1]);

        for (int i = 0; i < n; i++)
            cout << ash[i] << " ";
        cout << endl;
    }

    return 0;
}
