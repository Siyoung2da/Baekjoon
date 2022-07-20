#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int n, m, cnt = 999999;
char map[101][101];
bool visit[101][101];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void dfs(int row, int col, int result)
{
    visit[row][col] = true;

    for (int i = 0; i < 4; i++)
    {
        int x = row + dx[i];
        int y = col + dy[i];

        if (x >= 0 && x < n && y >= 0 && y < m)
        {
            if ((x == n - 1) && (y == m - 1))
            {
                if (cnt > result)
                {
                    cnt = result;
                }
                visit[row][col] = false;
                return;
            }
            if (!visit[x][y] && map[x][y] == '1')
            {
                dfs(x, y, result + 1);
            }
        }
    }
    visit[row][col] = false;
}

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string str_map;
        cin >> str_map;
        for (int j = 0; j < m; j++)
        {
            map[i][j] = str_map[j];
        }
    }

    dfs(0, 0, 1);
    cout << cnt + 1 << "\n";
}
