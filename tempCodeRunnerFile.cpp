#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;
void solve();

void solve()
{
    int ans = 0;
 int num;
        cin >> num;

        string logic;
        cin >> logic;

        
        for (int i = 0; i < num; ++i) {
            if (logic[i] == '0') {
                ans =ans+ 1;
            }
if(ans==0){
            if (i < num - 1) {
                cout << "idk";
            } else {
                cout << "yes";
            }
}
else
cout<<"NO";
cout << endl;
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