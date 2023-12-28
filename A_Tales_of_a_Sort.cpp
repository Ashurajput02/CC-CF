// // #include <iostream>
// // #include <bits/stdc++.h>
// // using namespace std;
// // int sorting(vector<int> &arr, int n);
// // int main()
// // {
// //     int t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         int n;
// //         cin >> n;
// //         vector<int> arr;
// //         for (int i = 0; i < n; i++)
// //         {
// //             int x;
// //             cin >> x;
// //             arr.push_back(x);
// //         }
// //         int count = 0;
// //         while (sorting(arr, n) != 0)
// //         {

// //             for (int i = 0; i < n; i++)
// //             {
// //                 int k = max(0, (arr[i] - 1));
// //                 arr[i] = k;
// //             }
// //             count++;
// //         }
// //         cout << count << endl;
// //     }
// // }

// // int sorting(vector<int> &arr, int n)
// // {
// //     int count = 0;
// //     for (int i = 0; i < n - 1; i++)
// //     {

// //         if (arr[i] > arr[i + 1])
// //             return 1;
// //     }

// //     return 0;
// // }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> arr;
//         for (int i = 0; i < n; i++)
//         {
//             int x;
//             cin >> x;
//             arr.push_back(x);
//         }
//         int count = 0;
//         while (!is_sorted(arr.begin(), arr.end()))
//         {
//             for (int i = 0; i < n; i++)
//             {
//                 arr[i] = max(0, arr[i] - 1);
//             }
//             count++;
//         }
//         cout << count << endl;
//     }
//     return 0;
// }//this will give you o(n^2) time complexity;

#include <bits/stdc++.h>

// #define all(x) (x).begin(), (x).end()
// #define allr(x) (x).rbegin(), (x).rend()
// #define gsize(x) (int)((x).size())
#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
typedef long long ll;
typedef long double ld;

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            ans = max(ans, a[i]);
        }
    }

    cout << ans << nl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
