#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<bool> vec(1000001, true);

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vec[0] = false;
    vec[1] = false;
    for (int i = 2; i <= sqrt(1000000); i++)
    {
        if (vec[i] == true)
        {
            for (int j = 2 * i; j <= 1000000; j += i)
            {
                vec[j] = false;
            }
        }
    }
    while (1)
    {
        int n, flag = 0;
        cin >> n;
        if (n == 0)
            break;

        for (int i = 3; i <= n / 2; i += 2)
        {
            if (vec[i] == true && vec[n - i] == true)
            {
                cout << n << " = " << i << " + " << n - i << "\n";
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << "Goldbach's conjecture is wrong." << "\n";
    }
}