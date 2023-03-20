#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, c;
    vector<long long> vec;
    vector<long long> result;

    cin >> n >> c;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        vec.push_back(x);
    }
    sort(vec.begin(), vec.end());

    long long start = 0;
    long long end = 1000000000;
    while (end >= start)
    {
        long long mid = (start + end) / 2;
        long long cnt = 1;
        long long now = vec[0];
        for (int i = 1; i < n; i++)
        {
            if ((vec[i] - now) >= mid)
            {
                now = vec[i];
                cnt++;
            }
        }
        if (cnt >= c)
        {
            result.push_back(mid);
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << result[result.size() - 1] << "\n";
}