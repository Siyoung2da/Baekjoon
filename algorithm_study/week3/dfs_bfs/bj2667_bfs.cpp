#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int N, home = 0;
vector<int> home_result;
char map[26][26];
bool visit[26][26];
queue<pair<int, int> > q;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void bfs(int row, int col)
{
    visit[row][col] = true;
    q.push(pair<int, int>(row, col));
    home++;
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int newrow = dx[i] + x;
            int newcol = dy[i] + y;
            if (newrow < N && newrow >= 0 && newcol < N && newcol >= 0)
                if (!visit[newrow][newcol] && map[newrow][newcol] == '1')
                {
                    q.push(pair<int, int>(newrow, newcol));
                    visit[newrow][newcol] = true;
                    home++;
                }
        }
    }
}

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string num;
        cin >> num;
        for (int j = 0; j < N; j++)
        {
            map[i][j] = num[j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (!visit[i][j] && map[i][j] == '1')
            {
                bfs(i, j);
                home_result.push_back(home);
                home = 0;
            }
        }
    }
    sort(home_result.begin(), home_result.end());
    cout << home_result.size() << "\n";
    for (int i = 0; i < home_result.size(); i++)
    {
        cout << home_result[i] << "\n";
    }
}