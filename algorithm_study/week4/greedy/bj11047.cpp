#include <iostream>
using namespace std;

int arr[11];

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k, cnt = 0;

    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n; i > 0; i--)
    {
        if (k==0) break;
        // while (1)        first_solution
        // {
        //     if (k / arr[i] == 0) break;
        //     if (k / arr[i] >= 1)
        //     {
        //         k -= arr[i];
        //         cnt++;
        //     }
        // }
        
        cnt += k/arr[i];
        k = k % arr[i];
    }
    cout << cnt << "\n";
}