#include <iostream>
#include <vector>
using namespace std;

vector<int> N;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        N.push_back(x);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (N[i] > N[j])
            {
                int tmp = N[i];
                N[i] = N[j];
                N[j] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << N[i] << "\n";
}