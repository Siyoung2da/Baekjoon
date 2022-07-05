#include <iostream>
#include <vector>
using namespace std;

int n, s, result_cnt = 0;
vector<int> vec_num;
bool check[21];

void func(int cur, int total, int num)
{
    if (total == s)
    {
        result_cnt++;
    }
    if (num == n)
    {
        return;
    }

    for (int i = cur; i < n; i++)
    {
        if (!check[i])
        {
            check[i] = true;
            total += vec_num[i];
            func(i, total, num++);
            check[i] = false;
            total -= vec_num[i];
        }
    }
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec_num.push_back(x);
    }

    func(0, 0, 0);
    if (s==0)
        cout << result_cnt - 1 << "\n";
    else    cout << result_cnt << "\n";
}