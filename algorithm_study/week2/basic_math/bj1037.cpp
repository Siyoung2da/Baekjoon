#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> vec_n;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec_n.push_back(x);
    }
    sort(vec_n.begin(), vec_n.end());
    if (n % 2 == 1)
    {
        int num = vec_n[n/2];
        cout << num * num << "\n";
        return 0;
    }
    cout << vec_n.front() * vec_n.back() << "\n";
}