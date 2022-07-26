#include <iostream>
#include <algorithm>
using namespace std;

int A[1001];
int dp[1001];

int main()
{
    for (int i=0;i<=1000;i++) {
        dp[i] = 1;
    }

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }

    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (A[i] > A[j])
            {
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }
    sort(dp, dp+n+1);
    cout << dp[n] << "\n";
}