#include <bits/stdc++.h>
using namespace std;
int maxProduct(int arr[], int n)
{
    int product = 1;
    int min_val_index = -1, min_val = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min_val)
        {
            min_val = arr[i];
            min_val_index = i;
        }
    }

    arr[min_val_index] += 1;

    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
    }
    return product;
}
int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << maxProduct(arr, n) << endl;
    }
}
