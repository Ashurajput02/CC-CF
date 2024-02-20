#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>
#define ll long long

using namespace std;
vector<int> pf;

void primeFactors(int n)
{
    while (n % 2 == 0)
    {
        pf.push_back(2);
        n = n / 2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            pf.push_back(i);
            n = n / i;
        }
    }
}
vector<int> ans;
void sieveoferatosthenes(int n)
{

    vector<bool> isprime(1e6 + 1, true);
    isprime[0] = false;
    isprime[1] = false;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (isprime[i])
        {
            for (int j = i * i; j < n; j += i)
            {
                isprime[j] = false;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (isprime[i])
        {
            ans.push_back(i);
        }
    }
}

void solve(int n)
{

    if (n & 1)
    {
        cout << 1 << ' ';
        int i = 0;
        while (i < (n / 2))
        {

            cout << ans[i] << ' ' << ans[i] << ' ';
            i++;
        }
        cout << endl;
    }
    else
    {
        int j = 0;
        while (j < (n / 2))
        {
            cout << ans[j] << ' ' << ans[j] << ' ';
        }
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
        int n;
        cin >> n;
        sieveoferatosthenes(n);
        solve(n);
    }
    return 0;
}