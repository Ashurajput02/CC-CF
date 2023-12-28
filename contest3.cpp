#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;
void solve();

void solve()
{
    int N, K;
    cin >> N >> K;

    long long max_result = -1;  // Initialize max_result to a negative value
    int max_X = 0;

    for (int X = 0; X <= N; X++) {
        long long result = (X % K) * ((N - X) % K);
        if (result > max_result) {
            max_result = result;
            max_X = X;
        }
    }

    cout << max_X << endl;
    return 0;
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