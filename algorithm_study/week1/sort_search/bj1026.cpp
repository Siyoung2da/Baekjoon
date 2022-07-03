#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> A;
vector<int> B;
bool rev(int a, int b);

int main()
{
    int n, result = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        A.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        B.push_back(x);
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), rev);

    for (int i = 0; i < n; i++)
    {
        result += A[i] * B[i];
    }
    cout << result << "\n";
}
bool rev(int a, int b)
{
    return a > b;
}