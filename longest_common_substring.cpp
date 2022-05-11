
// C++ program using to find length of the
// longest common substring  recursion
#include <bits/stdc++.h>
#include <string>



using namespace std;

/*
 * O(m*n)
 */
int lcs(char* a, char* b)
{
    int max = 0;
    int n = strlen(a);
    int m = strlen(b);
    int dp[n][m];   

    memset(dp, 0, sizeof(int) * m * n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > max)
                    max = dp[i][j];
            }
        }
    }
    return max;
}

int main(int argc, char* argv[])
{   
    cout << lcs(argv[1], argv[2]) << endl;
}