#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;

int n, m;
char map[101][101];
bool visit[101][101];
int cnt[101][101] = {1};
queue<pair<int, int> > q;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void bfs(int row, int col)
{
    visit[row][col] = true;
    q.push(pair<int, int>(row, col));

    while (!q.empty())
    {
        int n_row = q.front().first;
        int n_col = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int x = n_row + dx[i];
            int y = n_col + dy[i];

            if (x >= 0 && x < n && y >= 0 && y < m)
            {
                if (!visit[x][y] && map[x][y] == '1')
                {
                    visit[x][y] = true;
                    cnt[x][y] = cnt[n_row][n_col] + 1;
                    q.push(pair<int, int>(x, y));
                }
            }
        }
    }
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
    bfs(0, 0);
    cout << cnt[n-1][m-1] <<"\n";
}
