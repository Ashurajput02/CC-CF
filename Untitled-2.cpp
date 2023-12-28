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
    vector<int> a(n-1);
    for(auto &i:a)
    cin>>i;
    Trie t;
    a.insert(a.begin(),0);
    t.insert(0);
    for(int i=1;i<n;i++)
    a[i] ^=a[i-1],t.insert(a[i]);

    for(int i=0;i<n;i++)
    if(a[i]<n && t.findMaxXor(a[i])==n-1)
    {
        vector<int>b;
        for(int j=0;j<n;j++)
        b.push_back(a[j]^a[i]);

        if(is_ok(b)){
            for(auto &i:b)
            cout<<i<<" ";
            cout<<endl;
            return ;
        }
    }
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