#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int dp[301];
vector<int> vec;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    
    dp[0] = vec[0];
    dp[1] = vec[0] + vec[1];
    dp[2] = max(vec[0] + vec[2], vec[1] + vec[2]);
    for (int i = 3; i < n; i++)
    {
        dp[i] = max(dp[i - 2] + vec[i], dp[i - 3] + vec[i - 1] + vec[i]);
    }
    cout << dp[n - 1] << "\n";
}