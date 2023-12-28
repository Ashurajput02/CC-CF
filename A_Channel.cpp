#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;
void solve();

void solve()
{
    int n, a, q;

    cin >> n >> a >> q;
    int cnt = a;
    char arr[q];

    int j = 0;
    for (int i = 0; i < q; i++)
    {
        cin >> arr[i];
    }
    while (n != a && j < q)
    {
        if (arr[j] == '+')
        {
            a += 1;
            cnt += 1;
        }
        else if (arr[j] == '-')
            a -= 1;
        j++;
    }
    // cout << "cnt is =" << cnt << "and the value of a is =" << a << endl;
    if (a == n)
        cout << "YES" << endl;
    else if (cnt >= n)
        cout << "MAYBE" << endl;
    else
        cout << "NO" << endl;
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
