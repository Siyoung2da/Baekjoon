#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int n, m, tim = 0, cnt = 0, last_cnt;
int cheeze[101][101];
bool visit[101][101];
queue<pair<int, int> > q;
int ddx[] = {-1, 1, 0, 0};
int ddy[] = {0, 0, -1, 1};

void bfs(int row, int col)
{
    visit[row][col] = true;
    q.push(make_pair(row, col));
    tim++;

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int dx = x + ddx[i];
            int dy = y + ddy[i];
            if (dx > 0 && dy > 0 && dx <= n && dy <= m)
            {
                if (!visit[dx][dy] && cheeze[dx][dy] == 0)
                {
                    q.push(make_pair(dx, dy));
                    visit[dx][dy] = true;
                }
                else if (!visit[dx][dy] && cheeze[dx][dy] == 1)
                {
                    visit[dx][dy] = true;
                    cheeze[dx][dy] = 0;
                    cnt++;
                }
            }
        }
    }
    if (cnt == 0) return;
    last_cnt = cnt;
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> cheeze[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {

            bfs(i, j);
            for (int a = 1; a <= n; a++)
            {
                for (int b = 1; b <= m; b++)
                {
                    visit[a][b] = false;
                }
            }

            if (cnt == 0)
            {
                cout << tim - 1 << "\n";
                cout << last_cnt << "\n";
                return 0;
            }

            cnt = 0;
        }
    }
}