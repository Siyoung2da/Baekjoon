#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int N, M, max_m, result = 10000000;
int arr[51][51];
bool visit[51][51];

vector<pair<int, int> > vec_c;

void dfs(int row, int col, int c_num)
{
    if (max_m == c_num)
    {
        int total = 0;
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N; j++)
            {
                if (arr[i][j] == 1)
                {
                    int dist = 10000000;
                    for (int k = 0; k < vec_c.size(); k++)
                    {
                        dist = min(dist, abs(vec_c[k].first - i) + abs(vec_c[k].second - j));
                    }
                    total += dist;
                }
            }
        }
        if (result > total)
            result = total;
        return;
    }
    for (int i = row; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (!visit[i][j] && arr[i][j] == 2)
            {
                visit[i][j] = true;
                vec_c.push_back(pair<int, int> (i, j));
                dfs(i, j, c_num + 1);
                visit[i][j] = false;
                vec_c.pop_back();
            }
        }
    }
}

int main()
{
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= M; i++)
    {
        max_m = i;
        dfs(1, 1, 0);
    }
    cout << result << "\n";
}