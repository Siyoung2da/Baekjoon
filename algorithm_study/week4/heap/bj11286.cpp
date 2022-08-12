#include <iostream>
#include <queue>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > abs_heap;
    vector<int> result;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(x==0) {
            if(abs_heap.empty()) {
                result.push_back(0);
            }
            else {
                result.push_back(abs_heap.top().second);
                abs_heap.pop();
            }
        }
        else {
            abs_heap.push(make_pair(abs(x), x));
        }
    }
    while(!result.empty()) {
        cout << result.front() << "\n";
        result.erase(result.begin());
    }
}