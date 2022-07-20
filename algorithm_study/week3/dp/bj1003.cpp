#include <iostream>
using namespace std;

int cnt0[41];
int cnt1[41];
void fibo(int n)
{
    if (n == 0)
    {
        cout << 1 << " " << 0 << "\n";
    }
    else if (n == 1)
    {
        cout << 0 << " " << 1 << "\n";
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            cnt0[i] = cnt0[i - 1] + cnt0[i - 2];
            cnt1[i] = cnt1[i - 1] + cnt1[i - 2];
        }
        cout << cnt0[n] << " " << cnt1[n] << "\n";
    }
}

int main()
{
    cnt0[0] = 1;
    cnt0[1] = 0;
    cnt1[0] = 0;
    cnt1[1] = 1;

    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        int n;
        cin >> n;
        fibo(n);
    }
}