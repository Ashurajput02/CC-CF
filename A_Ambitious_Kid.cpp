#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#define ll long long
#define mod 1000000007

using namespace std;
void solve();

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
        arr[i] = abs(arr[i]);

    int min = arr[0];

    for (int j = 1; j < n; j++)
    {
        if (arr[j] < min)
            min = arr[j];
    }
    cout << min << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}