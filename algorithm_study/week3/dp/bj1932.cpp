#include <iostream>
#include <algorithm>
using namespace std;

int arr[501][501];
int dp[501][501];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cin >> arr[i][j];
        }
    }
    dp[0][0] = arr[0][0];
    dp[1][0] = arr[0][0] + arr[1][0];
    dp[1][1] = arr[0][0] + arr[1][1];

    for (int i = 2; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
            {
                dp[i][j] = dp[i - 1][j] + arr[i][j];
            }
            else if (j == i)
            {
                dp[i][j] = dp[i - 1][j - 1] + arr[i][j];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j - 1] + arr[i][j], dp[i - 1][j] + arr[i][j]);
            }
        }
    }
    int max_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (dp[n - 1][i] > max_sum)
        {
            max_sum = dp[n - 1][i];
        }
    }
    cout << max_sum << "\n";
}