#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int k, n;
    vector<long long> vec;
    vector<long long> result;

    cin >> k >> n;
    for (int i = 0; i < k; i++)
    {
        long long x;
        cin >> x;
        vec.push_back(x);
    }

    long long start = 0;
    long long end = 0x7fffffff;
    while (end >= start)
    {
        long long mid = (start + end) / 2;
        long long sum = 0;
        for (int i = 0; i < k; i++)
        {
            sum += (vec[i] / mid);
        }
        if (sum >= n)
        {
            start = mid + 1;
            result.push_back(mid);
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << result[result.size() - 1] << "\n";
}