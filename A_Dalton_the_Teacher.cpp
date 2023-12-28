#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int j = 0;
        int count = 0;
        while (j < n)
        {
            if (arr[j] == j + 1)
                count++;

            j++;
        }
        if (count == 0)
            cout << count << endl;
        else
        {
            if (count % 2 == 0)
                cout << (count / 2) << endl;
            else
                cout << (count / 2 + 1) << endl;
        }
    }
}