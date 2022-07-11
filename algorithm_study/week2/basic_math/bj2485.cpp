#include <iostream>
#include <vector>
using namespace std;

vector<int> vec;
vector<int> dist;

int gcd(int a, int b)
{
    int tmp;
    while (b != 0)
    {
        tmp = a;
        a = b;
        b = tmp % a;
    }
    return a;
}

int main()
{
    int n, gcd_max;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    for (int i = 0; i < n - 1; i++)
    {
        dist.push_back(vec[i + 1] - vec[i]);
    }
    gcd_max = gcd(dist[1], dist[0]);
    for (int i = 2; i < dist.size(); i++)
    {
        gcd_max = gcd(gcd_max, dist[i]);
    }
    int cnt = 0;
    for (int i = 0; i < dist.size(); i++)
    {
        cnt += (dist[i] / gcd_max) - 1;
    }
    cout << cnt << "\n";
}