#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countSuitablePairs(int n, int c, vector<int> &s)
{
    int count = 0;

    for (int x = 0; x <= c; x++)
    {
        auto it = upper_bound(s.begin(), s.end(), x);
        int idx = distance(s.begin(), it);

        count += (idx * (idx + 1)) / 2;
    }

    return count;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, c;
        cin >> n >> c;

        vector<int> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        cout << countSuitablePairs(n, c, s) << endl;
    }

    return 0;
}
