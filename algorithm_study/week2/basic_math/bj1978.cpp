#include <iostream>
#include <cmath>
using namespace std;

int arr[1001];

int main()
{
    arr[0] = true;
    arr[1] = true;
    for (int i = 2; i <= sqrt(1000); i++)
    {
        if (arr[i] == false)
        {
            for (int j = 2 * i; j <= 1000; j += i)
            {
                arr[j] = true;
            }
        }
    }
    int n, result = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (arr[x] == false)
            result++;
    }
    cout << result << "\n";
}