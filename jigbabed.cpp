// jai shree ram
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>
#define ll long long
#define mod 1000000007

using namespace std;

//  bool isarr(int n)
//  {
//      if(n==1)return false;
//     int flag = 0;

//   for (int i = 2; i <= sqrt (n); i++)
//     {
//       if (n % i == 0){
// 	    flag = 1;
// 	    break;
// 	  }
//     }

//   if (flag == 0)
//    return true;
//   else return false;
// }

// bool isValid(string s)
// {
//     // if(s[0] == '0')return false;
//     int i = stoi(s, nullptr, 2);
//     if (i % 5 == 0 or i == 1)
//         return true;
//     return false;
// }

// Sieve of Eratosthenes
vector<int> seiveoferatosthenes(int n)
{
    vector<int> ans;
    vector<bool> isprime(n, true);
    isprime[0] = false;
    isprime[1] = false;

    for (int i = 2; i < n; i++)
    {
        if (isprime[i] == true)
        {
            for (int j = 2 * i; j < n; j += i)
            {
                isprime[j] = false;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (isprime[i] == true)
        {
            ans.push_back(i);
        }
    }

    return ans;
}
#include<bits/stdc++.h> 

using namespace std; 

#define int long long 

signed main() 
{ 
    int t; 
    cin>>t; 
    while(t--) 
    { 
        int n; 
        cin>>n; 
        int arr[n]; 
        map<int,int> mp; 

        for(int i=0;i<n;i++) 
        { 
            cin>>arr[i]; 
            mp[arr[i]]++; 
        } 
        if(mp.begin()->second==1) 
        { 
            cout<<"YES"<<endl; 
            continue; 
        } 
        vector<int> v; 
        for(auto x:mp) 
        { 
            v.push_back(x.first); 
        } 
        if(v.size()==1) 
        { 
            cout<<"NO"<<endl; 
            continue; 
        } 
        bool flag=true; 
        for(int i=1;i<v.size();i++) 
        { 
            if(v[i]%v[0]!=0) 
            { 
                cout<<"YES"<<endl; 
                flag=false; 
                break; 
            } 
        } 
        if(flag) 
        { 
            cout<<"NO"<<endl; 
        } 

    } 
}