#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#define ll long long
#define mod 1000000007

using namespace std;

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
void solve()
{
    int a, b, l;
    cin >> a >> b >> l;
    int ash = l;
    int count1 = 0;
    int count2 = 0;
    int jig = 0;
    while (l != 1)
    {
        if (l % a == 0)
        {
            count1++;
            l = l / a;
        }
        else if (l % b == 0)
        {
            count2++;
            l = l / b;
        }
        else if (l % a != 0 && l % b != 0)
        {
            jig++;
            break;
        }
    }
    // cout << count1 << " " << count2 << " ";
    // cout << (int)(pow(a, count1) * pow(b, count2)) << " ";
    if (jig != 0)
    {
        int cp = 0;
        int kanak = ash;
        while (kanak)
        {
            if (kanak % a == 0)
            {
                cp++;
                kanak = kanak / a;
            }
            else
                break;
        }
        int cp2 = 0;
        while (ash != 1)
        {
            if (ash % b == 0)
            {
                cp2++;
                ash = ash / b;
            }
            else
                break;
        }
        // cout << cp << " " << cp2 << endl;
        if (cp == 0 && cp2 == 0)
            cout << "1" << endl;
        else
            cout << ((cp + 1) * (cp2 + 1) - 1) << endl;
        return;
    }
    else
    {
        cout << (count1 + 1) * (count2 + 1) << endl;
        return;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
