#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int> > dot;

bool compare(pair<int, int> x, pair<int, int> y)
{
    if (x.second == y.second)
    {
        return x.first < y.first;
    }
    else
        return x.second < y.second;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        dot.push_back(pair<int, int>(x, y));
    }
    sort(dot.begin(), dot.end(), compare);
    for (int i = 0; i < dot.size(); i++)
    {
        cout << dot[i].first << " " << dot[i].second << "\n";
    }
}