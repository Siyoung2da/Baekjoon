#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    long long m;
    vector<long long> vec;
    vector<long long> result;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        vec.push_back(x);
    }
    sort(vec.begin(), vec.end());
    long long start = 0;
    long long end = vec[n - 1];
    long long mid;
    long long sum = 0;
    while (end >= start)
    {
        mid = (start + end) / 2;
        for (int i = 0; i < n; i++)
        {
            if (vec[i] > mid)
            {
                sum += vec[i] - mid;
            }
        }
        if (sum >= m)
        {
            result.push_back(mid);
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        sum = 0;
    }
    cout << result[result.size() - 1] << "\n";
}