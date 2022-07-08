#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    int tmp;
    while (y != 0)
    {
        tmp = x;
        x = y;
        y = tmp % y;
    }
    return x;
}

int main()
{
    int a, b;
    cin >> a >> b;

    if (a > b)
    {
        cout << gcd(a, b) << "\n";
        cout << a * b / gcd(a, b) << "\n";
    }
    else
    {
        cout << gcd(b, a) << "\n";
        cout << a * b / gcd(b, a) << "\n";
    }
}