#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000001];

void dp(int x)
{
    for (int i = 4; i <= x; i++)
    {
        if (i % 3 == 0 && i % 2 == 0)
        {
            arr[i] = min(arr[i / 3], arr[i / 2]);
            arr[i]++;
        }
        else if (i % 3 == 0)
        {
            arr[i] = min(arr[i / 3], arr[i - 1]);
            arr[i]++;
        }
        else if (i % 2 == 0)
        {
            arr[i] = min(arr[i / 2], arr[i - 1]);
            arr[i]++;
        }
        else
        {
            arr[i] = arr[i - 1] + 1;
        }
    }
}

int main()
{
    arr[1] = 0;
    arr[2] = 1;
    arr[3] = 1;

    int n;
    cin >> n;
    dp(n);
    cout << arr[n] << "\n";
}