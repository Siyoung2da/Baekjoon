#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001];
int dp[1001];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    dp[1] = arr[1];
    dp[2] = max(arr[1] * 2, arr[2]);
    for (int i = 3; i <= n; i++)
    {
        dp[i] = arr[i];
        for (int j = 1; j <= i / 2; j++)
        {
            int tmp = dp[i - j] + dp[j];
            if (dp[i] < tmp)
                dp[i] = tmp;
        }
    }
    cout << dp[n] << "\n";
}