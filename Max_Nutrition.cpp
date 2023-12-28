#include <iostream>
#include <map>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;
void solve();

void solve()
{
    vector<pair<int, int>> ash;
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        pair<int, int> abc;
        abc.first = a[i];
        abc.second = b[i];
        ash.push_back(abc);
    }

    auto comparator = [](const std::pair<int, int> &a, const std::pair<int, int> &b)
    {
        return a.first < b.first;
    };

    std::sort(ash.begin(), ash.end(), comparator);

    // for (int i = 0; i < n; i++)
    //     cout << ash[i].first << " " << ash[i].second << endl;
    map<int, std::pair<int, int>> myMap;

    for (const auto &pair : ash)
    {
        if (myMap.find(pair.first) == myMap.end() || pair.second > myMap[pair.first].second)
        {
            myMap[pair.first] = pair;
        }
    }

    int sum = 0;
    for (const auto &entry : myMap)
    {
        if (entry.second.second >= 0)
        {
            sum += entry.second.second;
        }
    }
    cout << sum << endl;
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