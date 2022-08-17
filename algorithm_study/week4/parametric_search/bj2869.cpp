#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long a, b, v;
    cin >> a >> b >> v;

    vector<long long> result;
    long long start = 0;
    long long end = 1000000000;
    while (end >= start)
    {
        long long mid = (start + end) / 2;
        if (a * mid - b * (mid - 1) >= v)
        {
            end = mid - 1;
            result.push_back(mid);
        }
        else
        {
            start = mid + 1;
        }
    }

    cout << result[result.size() - 1] << "\n";
}