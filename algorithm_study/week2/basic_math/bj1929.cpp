#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int N, M;
    cin >> M >> N;

    vector<bool> vec_n(N + 1, true);
    
    vec_n[0] = false;
    vec_n[1] = false;
    for (int i = 2; i <= sqrt(N); i++)
    {
        if (vec_n[i] == true)
        {
            for (int j = 2 * i; j <= N; j += i)
            {
                vec_n[j] = false;
            }
        }
    }

    for (int i = M; i <= N; i++)
    {
        if (vec_n[i] == true)
            cout << i << "\n";
    }
}