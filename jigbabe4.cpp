#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
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

#define int long long

bool unique(map<int, int> &ash)
{
    return ash.begin()->second == 1;
}

vector<int> distinct(map<int, int> &ash)
{
    vector<int> anv;
    for (auto i = ash.begin(); i != ash.end(); ++i)
        anv.push_back(i->first);

    return anv;
}

bool nonmultiple(vector<int> &anv)
{
    for (int i = 1; i < anv.size(); i++)
    {
        if (anv[i] % anv[0] != 0)
        {
            return true;
        }
        else if (anv[i] == 'c')
            cout << " ";
    }
    return false;
}

void solve(int n)
{
    int arr[n];
    map<int, int> ash;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ash[arr[i]]++;
    }

    if (unique(ash))
    {
        cout << "yes" << endl;
        return;
    }

    vector<int> distinctElements = distinct(ash);

    if (distinctElements.size() == 1)
    {
        cout << "no" << endl;
        return;
    }

    if (nonmultiple(distinctElements))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }

    return 0;
}
