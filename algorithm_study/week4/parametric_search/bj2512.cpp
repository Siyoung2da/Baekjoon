#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    long long m;
    vector<long long> vec;
    vector<long long> result;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        vec.push_back(x);
    }
    sort(vec.begin(), vec.end());
    cin >> m;

    long long start = 0;
    long long end = 1000000000;

    while (end >= start)
    {
        long long mid = (start + end) / 2;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (mid > vec[i])
            {
                sum += vec[i];
            }
            else
            {
                sum += mid;
            }
        }
        if (sum < m)
        {
            if(mid >= sum) {
                result.push_back(vec[n-1]);
                break;
            }
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