#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        n = (n - 1) / 2;
        long long sum = 0;
        for (long long i = 1; i <= n; i++)
        {
            sum = sum + (8 * pow(i, 2));
        }
        cout << sum << endl;
    }
    return 0;
}
