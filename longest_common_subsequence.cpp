#include <bits/stdc++.h>

using namespace std;

/*
 * O(m*n)
 */
int lcs(char* a, char* b)
{
    int n = strlen(a);
    int m = strlen(b);
    int dp[n + 1][m + 1];   

    memset(dp, 0, sizeof(int) * (m + 1) * (n + 1));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i - 1] == b[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
        }
    }

    return dp[n][m];
}




int main(int argc, char* argv[])
{   
    cout << lcs(argv[1], argv[2]) << endl;
}