#include <iostream>
#include <vector>
using namespace std;

string arr[65];

void dfs(int n, int x, int y)
{
    char check = arr[x][y];
    for (int i = x; i < x + n; i++)
    {
        for (int j = y; j < y + n; j++)
        {
            if (check != arr[i][j])
            {
                cout << "(";
                dfs(n / 2, x, y);
                dfs(n / 2, x, y + n / 2);
                dfs(n / 2, x + n / 2, y);
                dfs(n / 2, x + n / 2, y + n / 2);
                cout << ")";
                return;
            }
        }
    }
    cout << check;
}

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    dfs(N, 0, 0);
}