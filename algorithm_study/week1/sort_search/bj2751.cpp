#include <iostream>
#include <vector>
#include <algorithm>
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

    sort(N.begin(), N.end());

    for (int i = 0; i < n; i++)
    {
        cout << N[i] << "\n";
    }
}