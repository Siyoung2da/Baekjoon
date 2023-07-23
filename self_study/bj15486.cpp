#include <iostream>
#include <algorithm>
using namespace std;

int n;
int t[1500001];
int p[1500001];
int dp[1500001];
int curMax = -1;
int maxTotal;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t[i] >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        curMax = max(curMax, dp[i]);
        if (t[i] + i > n)
            continue;
        dp[i + t[i]] = max(curMax + p[i], dp[i + t[i]]);
        maxTotal = max(maxTotal, dp[i + t[i]]);
    }
    for (int i = 0; i <= n; i++)
        cout << dp[i] << " ";
    cout << maxTotal << "\n";
}
// 10      dp[i]
// 5 10    0
// 5 9     0
// 5 8     0
// 5 7     0
// 5 6     10
// 5 10
// 5 9
// 5 8
// 5 7
// 5 6