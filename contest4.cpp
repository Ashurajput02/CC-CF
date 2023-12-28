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
    vector<int>ash;
    for(int i=n;i>0;i--)
     ash.push_back(i);

     for(int i=0;i<ash.size();i++){
        cout<<ash[i]<<endl;
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