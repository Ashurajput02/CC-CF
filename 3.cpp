#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;
void solve();

void solve()
{
    int n;
    cin>>n;
    vector<int>ash(2*n-1);
    for(int i=0;i<2*n;i++)
    cin>>ash[i];

    sort(ash.begin(),ash.end());
    int ans=0;
    for(int i=0;i+1<n;i++){
        ans+=ash[i+1] -ash[i] + ash[i+n+1]-ash[i+n];

    }
    cout<<ans<<endl;
    for(int i=0;i<n;i++)
    cout<<ash[i]<<" "<<ash[i+n]<<endl;
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