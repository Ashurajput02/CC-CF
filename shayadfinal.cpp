#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// Function to check if there exist disjoint subsets whose sum equals the target sum
bool hasDisjointSubsets(vector<int> &A, vector<int> &B, int T, int &sum1, int &sum2, vector<int> &indicesA, vector<int> &indicesB)
{
    int n = A.size();
    unordered_map<int, pair<int, int>> dp;

    // Base case: empty subset has sum 0
    dp[0] = make_pair(-1, -1);

    // Loop through array A
    for (int i = 0; i < n; ++i)
    {
        unordered_map<int, pair<int, int>> temp = dp;
        // Loop through elements in dp and update possible sums with current element of A
        for (auto &it : dp)
        {
            temp[it.first + A[i]] = make_pair(i, -1); // Storing index of element from A
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
            indicesB.push_back(i);
            int idxA = dp[T - B[i]].first;
            while (idxA != -1)
            {
                indicesA.push_back(idxA);
                idxA = dp[A[idxA]].first;
            }
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
    vector<int> indicesA, indicesB;

    if (hasDisjointSubsets(a, b, t, sum1, sum2, indicesA, indicesB))
    {
        cout << "There exist disjoint subsets whose sum equals " << t << endl;
        cout << "Sum of subset 1: " << sum1 << ", Indices: ";
        for (int i = 0; i < indicesA.size(); ++i)
        {
            cout << indicesA[i] << " ";
        }
        cout << endl;
        cout << "Sum of subset 2: " << sum2 << ", Indices: ";
        for (int i = 0; i < indicesB.size(); ++i)
        {
            cout << indicesB[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "No such disjoint subsets exist." << endl;
    }

    return 0;
}
