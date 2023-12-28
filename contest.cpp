#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;
void solve();

void solve()
{
     long long N, K;
   
    cin >> N >> K;
    
    long long t1 = (N - K + 1) / K;
    long long X = K - 1 + K * t1;
    
    cout << X << endl;
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