#include <iostream>
using namespace std;

const int MOD = 1000000007;

long long mp(long long base, long long exp, int md)
{
    long long res = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            res = (res * base) % md;
        }
        base = (base * base) % md;
        exp /= 2;
    }
    return res;
}

long long cnt(int n, int k, int a[])
{
    int odd = 0;
    int even = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    if (k == 0 && odd == 0)
    {
        return 1;
    }
    if (k == 1 && odd < 2)
    {
        return 0;
    }

    long long ans = mp(2, even, MOD);
    ans = (ans * ((odd * (odd - 1)) / 2)) % MOD;

    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long res = cnt(n, k, a);
        cout << res << endl;
    }
    return 0;
}
