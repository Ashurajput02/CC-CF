#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;
void solve();

void solve()
{
    string input;
    cin >> input;
    queue<char> q;
    int t = input.length();
    vector<char> s;
    for (int i = 0; i < input.length(); ++i)
    {
        q.push(input[i]);
    }
    int j = 0;
    while (!q.empty())
    {
        char ash = q.front();
        if (j == 0 && ash == ')')
        {
            s.push_back('(');
            s.push_back(ash);
        }
        else if (ash == '(' && s[j - 1] != '(')
        {

            s.push_back('(');
            s.push_back(')');
        }
        else if (ash == '(' && s[j - 1] != ')')
        {
            s.push_back(')');
            s.push_back(ash);
        }
        else
            s.push_back(ash);
        q.pop();
    }

    int n = s.size();

    if (n == t)
        cout << "NO" << endl;

    else
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
            cout << s[i];
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
        solve();
    }
}