#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> glass;
int dp[10001];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        glass.push_back(x);
    }

    dp[0] = glass[0];
    dp[1] = glass[0] + glass[1];
    dp[2] = max(max(glass[0] + glass[2], glass[1] + glass[2]), dp[1]);
    for (int i = 3; i < n; i++)
    {
        dp[i] = max(max(dp[i - 2] + glass[i], dp[i - 3] + glass[i - 1] + glass[i]), dp[i - 1]);
    }
    
    cout << dp[n - 1] << "\n";
}
