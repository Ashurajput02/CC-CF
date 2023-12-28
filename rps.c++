#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;
void solve();

void solve()
{
    vector<int> ash;
    int c1 = 0;
    int c2 = 0;
    int n;
    cin >> n;
    string chef;

    string chefina;
    cin >> chef;
    cin >> chefina;

    for (int i = 0; i < n; i++)
    {
        if (chef[i] == 'R')
        {
            if (chefina[i] == 'P')
            {
                c2++;
                ash.push_back(0);
            }
            else if (chefina[i] == 'S')
            {
                c1++;
                ash.push_back(1);
            }
        }

        if (chef[i] == 'P')
        {
            if (chefina[i] == 'R')
            {
                c1++;

                ash.push_back(1);
            }
            else if (chefina[i] == 'S')
            {
                c2++;

                ash.push_back(0);
            }
        }
        if (chef[i] == 'S')
        {
            if (chefina[i] == 'P')
            {
                c1++;

                ash.push_back(1);
            }
            else if (chefina[i] == 'R')
            {
                c2++;

                ash.push_back(1);
            }
        }
    }

    int cntr = 0;
    if (c2 > c1)
    {
        // cout << (c2 - c1) << endl;
        for (int j = 0; j < ash.size(); j++)
        {
            if (ash[j] == 1)
                continue;
            else if (c2 < c1)
                break;
            else
            {
                cntr++;
                c1++;
                c2--;
            }
        }
    }

    else if (c2 == c1)
        cout << "1" << endl;
    else
        cout << "0" << endl;
    ;
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
        solve();
    }
}