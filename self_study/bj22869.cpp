#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
int dp[5001];
int stone[5001];

int dfs(int num)
{
    if (num == n)
    {
        return 1;
    }
    // int &ret = dp[num];
    if (dp[num] != -1)
    {
        return dp[num];
    }
    dp[num] = 0;
    for (int i = num + 1; i <= n; i++)
    {
        cout << i << " ";
        if ((i - num) * (1 + abs(stone[num] - stone[i])) <= k)
        {
            if (dfs(i) == 1)
            {
                dp[num] = 1;
                break;
            }
        }
    }
    return dp[num];
}

int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> stone[i];
        dp[i] = -1;
    }

    if (dfs(1) == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}