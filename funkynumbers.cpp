#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> m;
    int a = 1;
    int k = 0;
    while (a < n)
    {
        m.push_back(a);
        k++;
        a += k + 1;
    }
    int l = 0, r = k - 1;
    for (int i = 0; i < k; i++)
    {
        if (m[l] + m[r] > n)
        {
            r--;
        }
        else if (m[l] + m[r] < n)
        { 
            l++;
        }
        else
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
