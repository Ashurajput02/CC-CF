// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// void solver();
// int main(){
//     solver();
// }
// void solver(){
//     int t;
//     cin>>t;
//     while(t--){
// {
//     ll n;
//     cin>>n;
//     vector<ll>v[n];
//     vector<ll>v1,v2;
//     for(i,0,n){
//         ll n1;
//         cin>>n1;
//         for(int j=0;j<n;j++){
//             ll x;
//             cin>>x;
//             v[i].push_back(x);
//         }
//         sort(v[i].begin(),v[i].end());
//         v1.push_back(v[i][1]);
//         v2.push_back(v[i][0]);
//     }
//     sort(v2.begin(),v2.end());
//     sort(v1.begin(),v1.end());
//     ll sum=v2[0];
//     for(ll i=1;i<n;i++){
//         sum =sum+v1[i];

//     }
//     cout<<sum<<endl;

//     }
// }}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

using ll = long long;

void solver();

int main()
{
    solver();
    return 0;
}

void solver()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<vector<ll>> v(n);
        vector<ll> v1, v2;

        for (int i = 0; i < n; i++)
        {
            ll n1;
            cin >> n1;
            for (int j = 0; j < n; j++)
            {
                ll x;
                cin >> x;
                v[i].push_back(x);
            }
            sort(v[i].begin(), v[i].end());
            v1.push_back(v[i][1]);
            v2.push_back(v[i][0]);
        }

        sort(v2.begin(), v2.end());
        sort(v1.begin(), v1.end());
        ll sum = v2[0];
        for (ll i = 1; i < n; i++)
        {
            sum += v1[i];
        }
        cout << sum << endl;
    }
}
