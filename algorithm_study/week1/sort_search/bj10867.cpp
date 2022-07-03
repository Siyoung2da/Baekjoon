#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> only_one;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        only_one.push_back(x);
    }
    sort(only_one.begin(), only_one.end());
    only_one.erase(unique(only_one.begin(), only_one.end()), only_one.end());
    for (int i = 0; i < only_one.size(); i++)
        cout << only_one[i] << " ";
}