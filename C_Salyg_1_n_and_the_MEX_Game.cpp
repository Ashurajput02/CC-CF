#include <iostream>
#include <bits/stdc++.h>
#include <set>
#define ll long long
#define mod 1000000007

using namespace std;
void solve();

void solve()
{
    int n;
    cin >> n;
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        s.insert(num);
    }

    int mex = 0;
    set<int> play;
    for (int i = 0; i <= n + 1; i++)
    {
        if (s.find(i) == s.end())
            play.insert(i);
    }
    int test = 1;
    int c = 0;
    while (c < 2 * n + 1 && test != 0)
    {
        int v = *play.begin();
        cout << *play.begin() << endl;
        play.erase(play.begin());
        cout.flush();
        int y;
        cin >> y;
        if (y == -1)
        {
            test = 0;
        }
        else
        {
            s.erase(y);
            play.insert(y);
        }
        c = c + 1;
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
        solve();
    }
}