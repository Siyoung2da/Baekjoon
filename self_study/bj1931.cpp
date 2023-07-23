#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

vector<pair<int, int> > meet;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;

    return a.second < b.second;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int start, end;
        cin >> start >> end;
        meet.push_back(make_pair(start, end));
    }

    sort(meet.begin(), meet.end(), cmp);
    // for (int i=0;i<n;i++)t << ", " << meet[i].second << "\n";

    int cnt = 1;
    queue<pair<int, int> > q;
    q.push(make_pair(meet[0].first, meet[0].second));
    int i=1;
    while (!q.empty())
    {
        if(meet[i].first >= q.front().second) {
            q.pop();
            cnt++;
            q.push(make_pair(meet[i].first, meet[i].second));
        }
        i++;
        if(i == n) {
            q.pop();
        }
    }
    cout << cnt << "\n";
}