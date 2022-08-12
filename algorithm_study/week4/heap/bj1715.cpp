#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, result = 0;
    cin >> n;

    priority_queue<int, vector<int>, greater<int> > heap;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        heap.push(x);
    }

    while (!heap.empty())
    {
        if (n == 1)
        {
            result += 0;
            heap.pop();
        }
        else
        {
            int keep = heap.top();
            heap.pop();
            if (heap.empty())
            {
                break;
            }
            keep += heap.top();
            heap.pop();
            if (heap.empty())
            {
                result += keep;
                break;
            }
            result += keep;
            heap.push(keep);
        }
    }
    cout << result << "\n";
}