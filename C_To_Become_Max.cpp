#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}

// void solve()
// {
//     int n;
//     cin >> n;
//     int k;
//     cin >> k;
//     int arr[n];
//     int i = 0;
//     while (i < n)
//     {
//         cin >> arr[i++];
//     }
//     int j = 0;
//     int max = 0;
//     int counter = 0;
//     while (j < n)
//     {
//         if (arr[j] > max)
//         {
//             max = arr[j];
//             counter = j;
//         }
//         j++;
//     }

//     if (counter == 0)
//         cout << max << endl;

//     else
//     {
//         if ((arr[counter] - arr[counter - 1]) <= k)
//             cout << arr[counter] + 1 << endl;
//         else
//             cout << arr[counter] << endl;
//     }
// }

void solve()
{

    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int p = 0; p < n; p++)
        cin >> arr[p];

    int max = 0;
    int counter = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] > max)
            max = arr[j];
        counter = j;
    }

    while (k != 0)
    {
        if (counter == 0)
            cout << max << endl;

        else if (max >= arr[counter - 1])
        {
            int diff = max - arr[counter - 1];
            if ((diff + 1) < k)
            {
                arr[counter - 1] = arr[counter] + 1;
                max = arr[counter - 1];
                counter--;
                k = k - diff - 1;
            }
            int ans = max;
            cout << ans << endl;
        }
    }
    return;
}

// int i = 0;
// while (k != 0)
// {
//     if (arr[i] <= arr[i + 1])
//     {
//         k--;
//         arr[i] = arr[i] + 1;
//     }
//     else if (arr[i] > arr[i + 1])
//     {
//         i++;
//     }
//     else if (i == n - 1)
//         break;
// }
// int max = 0;
// for (int j = 0; j < n; j++)
// {
//     if (arr[j] > max)
//         max = arr[j];
// }
