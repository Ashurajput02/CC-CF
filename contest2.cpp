#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;
void solve();

void solve()
{

    int n;
    int k;
    cin>>n>>k;
    auto f=[&](int X)->int{
        return (X % k)*((n-X)%k);
    };
int x=0;
int ans=-1
int c;

c=(n%k)/2;
if(ans<f(c)) ans=f(c),x=c;
c=min({n-1,k-1,(n%k)/2+1});
if(ans<f(c)) ans=f(c),x=c;



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