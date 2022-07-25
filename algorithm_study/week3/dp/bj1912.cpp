#include <iostream>
#include <algorithm>
using namespace std;

int arr[100001];
int dp[100001];

int main() {
    int n;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }
    dp[0] = arr[0];
    for (int i=1;i<n;i++) {
        if(dp[i-1] < 0) {
            dp[i] = arr[i];
        }
        else {
            dp[i] = dp[i-1] + arr[i];
        }
    }
    sort(dp, dp+n);
    cout << dp[n-1] << "\n";
}