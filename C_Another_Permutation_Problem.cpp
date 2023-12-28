#include <iostream>
#include <vector>
#include <algorithm>
using ll = long long;
using namespace std;
void solver(vector<int> &perm)
{
    int n = perm.size();
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        vector<int> ash = perm;
        reverse(ash.begin() + i, ash.end());

        long long sum = 0;
        long long jig = 0;
        for (int j = 0; j < n; j++)
        {
            sum += (long long)ash[j] * (j + 1);
            jig = max(jig, (long long)ash[j] * (j + 1));
        }
        ans = max(ans, sum - jig);
    }

    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> perm(n);
        for (int i = 0; i < n; i++)
        {
            perm[i] = i + 1;
        }
        solver(perm);
    }
    return 0;
}
