#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;

int n, m;
int map[1001][1001];
bool visit[1001][1001][2];
int check[1001][1001];
queue<pair<pair<int, int>, int> > q;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void bfs(int row, int col)
{
    visit[row][col][0] = true;
    check[row][col] = 1;
    q.push(make_pair(make_pair(row, col), 0));
    while (!q.empty())
    {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int z = q.front().second;
        q.pop();
        if (x == n && y == m)
            return;
        for (int i = 0; i < 4; i++)
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];
            if (new_x > 0 && new_x <= n && new_y > 0 && new_y <= m)
            {
                if (map[new_x][new_y] == 1 && z==0)
                {
                    q.push(make_pair(make_pair(new_x, new_y), 1));
                    check[new_x][new_y] = check[x][y] + 1;
                    visit[new_x][new_y][z+1] = true;
                }
                else if (!visit[new_x][new_y][z] && map[new_x][new_y] == 0)
                {
                    q.push(make_pair(make_pair(new_x, new_y), z));
                    visit[new_x][new_y][z] = true;
                    check[new_x][new_y] = check[x][y] + 1;
                }
                
            }
        }
    }
    check[n][m] = -1;
}

int main()
{
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        string str;
        cin >> str;
        for (int j = 1; j <= m; j++)
        {
            map[i][j] = str[j - 1] - 48;
        }
    }
    bfs(1, 1);
    cout << check[n][m] << "\n";
}