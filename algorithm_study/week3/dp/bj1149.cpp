#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001][1001];
int dp[1001][1001];

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
        dp[1][i] = arr[1][i];

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (j == 1)
                dp[i][j] = min(dp[i - 1][2] + arr[i][1], dp[i - 1][3] + arr[i][1]);
            else if (j == 2)
                dp[i][j] = min(dp[i - 1][1] + arr[i][2], dp[i - 1][3] + arr[i][2]);
            else
                dp[i][j] = min(dp[i - 1][1] + arr[i][3], dp[i - 1][2] + arr[i][3]);
        }
    }
    int min_sum = 999999;
    for (int i = 1; i <= 3; i++)
    {
        if (min_sum > dp[n][i])
            min_sum = dp[n][i];
    }
    cout << min_sum << "\n";
}