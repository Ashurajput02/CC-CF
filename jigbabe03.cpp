// jaishreeram
#include <iostream>
#include <bits/stdc++.h>
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
int solve(int n)
{

    vector<int> ans;
    int jig = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ans.push_back(x);
        jig += x;
        if (x % 3 == 1)
            count = 1;
    }
    if (jig % 3 == 2)
        return 1;
    else if (jig % 3 == 0)
        return 0;
    else if (count != 0)
        return 1;
    else
        return 2;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = solve(n);
        cout << ans << endl;
    }
    return 0;
}
