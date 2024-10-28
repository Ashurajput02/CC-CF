// #include <iostream>
// #include <bits/stdc++.h>
// #include <math.h>
// #define ll long long
// #define mod 1000000007

// using namespace std;

// void solve()
// {
// }
// int main()
// {
//     solve();
//     return 0;
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     vector<int> b(n);
//     int t;
//     cin>>t;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cin >> b[i];
//     }
// }

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// Function to check if there exist disjoint subsets whose sum equals the target sum
bool hasDisjointSubsets(vector<int> &A, vector<int> &B, int T, int &sum1, int &sum2)
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
            cout << i;
            cout << dp[T - B[i]];
            cout << B[i];
            sum1 = T - B[i];
            sum2 = B[i];
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

    if (hasDisjointSubsets(a, b, t, sum1, sum2))
    {
        cout << "There exist disjoint subsets whose sum equals " << t << endl;
        cout << "Sum of subset 1: " << sum1 << endl;
        cout << "Sum of subset 2: " << sum2 << endl;
    }
    else
    {
        cout << "No such disjoint subsets exist." << endl;
    }

    return 0;
}

// you are given two (unsorted) arrays A=(a0,a1,a2,a3,...an-1) and B=(b0,b1,b2...,bn-1), each consisting of n integers (positive ,negative or zero ).You are also given a target sum T(positive integer).
// Your task is to find disjoint subsets I,J of indices satisfying I union J={0,1,2,3....n-1} such that sum of I + sum of J=T
// or to report that no such I,J exist. apply dynamic programming to solve above problem ?print sum1 and sum2 which came.also write the indices of set A and set B which produce the desired result.