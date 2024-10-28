#include <iostream>
#include <vector>

bool canGetSum(int n, int T, std::vector<int> &A, std::vector<int> &B)
{
    std::vector<std::vector<bool>> dp(n + 1, std::vector<bool>(T + 1, false));
    dp[0][0] = true;
    for (int i = 1; i <= n; i++)
    {
        dp[i][0] = true;
        for (int j = 1; j <= T; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (j >= A[i - 1])
            {
                dp[i][j] = dp[i][j] || dp[i - 1][j - A[i - 1]];
            }
            if (j >= B[i - 1])
            {
                dp[i][j] = dp[i][j] || dp[i - 1][j - B[i - 1]];
            }
        }
    }
    return dp[n][T];
}

int main()
{
    int n = 10;
    std::vector<int> A = {79, -89, -85, 94, 74, 12, -34, 70, -21, 22};
    std::vector<int> B = {-87, -10, 62, -33, -39, 23, 15, 30, 72, 48};
    int T = 123;
    if (canGetSum(n, T, A, B))
    {
        std::cout << "Can get sum " << T << " using elements from arrays A and B" << std::endl;
    }
    else
    {
        std::cout << "Cannot get sum " << T << " using elements from arrays A and B" << std::endl;
    }
    return 0;
}