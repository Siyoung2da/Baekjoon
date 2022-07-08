#include <iostream>
using namespace std;

int result, n;
int arr[3] = {1, 2, 3};
void funct(int k)
{
    if (n == k)
    {
        result++;
        return;
    }
    else if (k > n)
        return;
    for (int i = 0; i < 3; i++)
    {
        k += arr[i];
        funct(k);
        k -= arr[i];
    }
}

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> n;

        funct(0);
        cout << result << "\n";
        result = 0;
    }
}