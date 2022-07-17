#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int n, k;
int map[100001];
bool visit[100001];
queue<pair<int, int> > q;
int arr_x[] = {-1, 1};

void bfs(int s)
{
    visit[s] = true;
    q.push(pair<int, int>(s, 0));
    while (!q.empty())
    {
        int x = q.front().first;
        int cnt = q.front().second;
        q.pop();
        if (x==k) {
            cout << cnt << "\n";
            break;
        }
        for (int i = 0; i < 3; i++)
        {
            int dx;
            if (i == 2)
            {
                dx = x * 2;
            }
            else
            {
                dx = x + arr_x[i];
            }
            if (dx <= 100000 && dx >= 0)
            {
                if (!visit[dx])
                {
                    q.push(pair<int, int>(dx, cnt + 1));
                    visit[dx] = true;
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

    cin >> n >> k;
    bfs(n);
}