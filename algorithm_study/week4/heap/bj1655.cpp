#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int> > min_heap;
    priority_queue<int, vector<int>, less<int> > max_heap;
    vector<int> result;

    int first, second, left = 0, right = 0;
    cin >> first;
    min_heap.push(first);
    result.push_back(first);
    left++;
    if (n == 1)
    {
        cout << min_heap.top() << "\n";
        return 0;
    }

    cin >> second;
    if (second > first)
    {
        max_heap.push(first);
        min_heap.pop();
        min_heap.push(second);
        result.push_back(first);
    }
    else
    {
        max_heap.push(second);
        result.push_back(second);
    }
    right++;

    // min - 1, max - 1

    for (int i = 0; i < n - 2; i++)
    {
        int x;
        cin >> x;

        if (left == right)
        {
            if (x < min_heap.top())
            {
                max_heap.push(x);
                result.push_back(max_heap.top());
                right++;
            }
            else
            {
                min_heap.push(x);
                result.push_back(min_heap.top());
                left++;
            }
        }
        else if (left < right)
        {
            if (x < min_heap.top())
            {
                max_heap.push(x);
                min_heap.push(max_heap.top());
                max_heap.pop();
            }
            else
            {
                min_heap.push(x);
            }
            result.push_back(max_heap.top());
            left++;
        }
        else
        {
            if (x >= min_heap.top())
            {
                min_heap.push(x);
                max_heap.push(min_heap.top());
                min_heap.pop();
            }
            else
            {
                max_heap.push(x);
            }
            result.push_back(max_heap.top());
            right++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << result[i] << "\n";
    }
}