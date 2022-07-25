#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, k, cnt = 0;
int map[101][101];
bool visit[101][101];
queue<pair<int, int> > q;
vector<int> vec_cnt;
int ddx[] = {-1, 1, 0, 0};
int ddy[] = {0, 0, -1, 1};

void bfs(int row, int col)
{
    visit[row][col] = true;
    q.push(make_pair(row, col));
    cnt++;
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int dx = x + ddx[i];
            int dy = y + ddy[i];
            if (dx >= 0 && dy >= 0 && dx < n && dy < m)
            {
                if (!visit[dx][dy] && map[dx][dy] == 0)
                {
                    q.push(make_pair(dx, dy));
                    visit[dx][dy] = true;
                    cnt++;
                }
            }
        }
    }
}

int main()
{
    cin >> n >> m >> k;
    for (int z = 0; z < k; z++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int i = y1; i < y2; i++)
        {
            for (int j = x1; j < x2; j++)
            {
                map[i][j] = 1;
                visit[i][j] = true;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visit[i][j] && map[i][j] == 0)
            {
                bfs(i, j);
                vec_cnt.push_back(cnt);
                cnt = 0;
            }
        }
    }
    sort(vec_cnt.begin(), vec_cnt.end());
    cout << vec_cnt.size() << "\n";
    for (int i = 0; i < vec_cnt.size(); i++)
    {
        cout << vec_cnt[i] << " ";
    }
}