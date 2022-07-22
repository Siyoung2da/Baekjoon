#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int m, n, h;
int box[101][101][101];
int visit[101][101][101];
queue<pair<pair<int, int>, int> > q;
int ddx[] = {-1, 1, 0, 0, 0, 0};
int ddy[] = {0, 0, -1, 1, 0, 0};
int ddz[] = {0, 0, 0, 0, -1, 1};

void bfs()
{
    while (!q.empty())
    {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int z = q.front().second;
        q.pop();
        for (int i = 0; i < 6; i++)
        {
            int dx = x + ddx[i];
            int dy = y + ddy[i];
            int dz = z + ddz[i];
            if (dx > 0 && dx <= n && dy > 0 && dy <= m && dz > 0 && dz <= h)
            {
                if (!visit[dz][dx][dy] && box[dz][dx][dy] == 0)
                {
                    visit[dz][dx][dy] = visit[z][x][y] + 1;
                    q.push(make_pair(make_pair(dx, dy), dz));
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

    cin >> m >> n >> h;

    for (int k = 1; k <= h; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> box[k][i][j];
                if (box[k][i][j] == 1)
                {
                    q.push(make_pair(make_pair(i, j), k));
                    visit[k][i][j] = 1;
                }
                else if (box[k][i][j] == -1)
                {
                    visit[k][i][j] = -1;
                }
            }
        }
    }

    bfs();

    int min_sum = 0;
    for (int k = 1; k <= h; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (min_sum < visit[k][i][j])
                {
                    min_sum = visit[k][i][j];
                }
                if (box[k][i][j] == 0 && visit[k][i][j] == 0)
                {
                    cout << "-1" << "\n";
                    return 0;
                }
            }
        }
    }
    cout << min_sum -1 << "\n";
}