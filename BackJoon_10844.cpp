#include <iostream>

using namespace std;
int dp[101][10];
#define M 1000000000
int main()
{

    int n;

    cin >> n;
    long long ret = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 1)
            {
                dp[i][j] = 1;
            }
            else
            {

                if (j == 0)
                {
                    dp[i][j] += dp[i - 1][j + 1] % M;
                }
                else if (j == 9)
                {
                    dp[i][j] += dp[i - 1][j - 1] % M;
                }
                else
                {
                    dp[i][j] += dp[i - 1][j + 1] % M;
                    dp[i][j] += dp[i - 1][j - 1] % M;
                }
            }
        }
        if (i == n)
        {
            dp[i][0] = 0;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        ret += dp[n][i] % M;
    }
    cout << ret % M;
    return 0;
}