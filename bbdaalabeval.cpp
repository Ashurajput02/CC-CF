#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// Function to check if there exist disjoint subsets whose sum equals the target sum
bool hasDisjointSubsets(vector<int> &A, vector<int> &B, int T, int &sum1, int &sum2, vector<int> &indices1, vector<int> &indices2)
{
    int n = A.size();
    unordered_map<int, bool> dp;

    // Base case: empty subset has sum 0
    dp[0] = true;

    // Loop through array A
    for (int i = 0; i < n; ++i)
    {
        unordered_map<int, bool> temp = dp;
        // Loop through elements in dp and update possible sums with current element of A
        for (auto &it : dp)
        {
            temp[it.first + A[i]] = true;
        }
        dp = temp;
    }

    // Loop through array B and check if there's a sum in dp that equals T - B[i]
    for (int i = 0; i < n; ++i)
    {
        if (dp.find(T - B[i]) != dp.end())
        {
            sum1 = T - B[i];
            sum2 = B[i];
            indices1.push_back(i);
            indices2.push_back(i);
            return true;
        }
    }

    return false;
}

int main()
{
    // Example usage
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int t;
    cin >> t;

    int sum1, sum2;
    vector<int> indices1, indices2;

    if (hasDisjointSubsets(a, b, t, sum1, sum2, indices1, indices2))
    {
        cout << "There exist disjoint subsets whose sum equals " << t << endl;
        cout << "Sum of subset 1: " << sum1 << endl;
        cout << "Sum of subset 2: " << sum2 << endl;
        cout << "Indices of subset 1: ";
        for (int i = 0; i < indices1.size(); i++)
        {
            cout << indices1[i] << " ";
        }
        cout << endl;
        cout << "Indices of subset 2: ";
        for (int i = 0; i < indices2.size(); i++)
        {
            cout << indices2[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "No such disjoint subsets exist." << endl;
    }

    return 0;
}