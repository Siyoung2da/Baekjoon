#include <iostream>
using namespace std;

int n, cnt = 0;
int student[100001];
bool visit[100001];
bool cycle[100001];

void dfs(int s)
{
    visit[s] = true;
    int choice = student[s];
    if (!visit[choice])
    {
        dfs(choice);
    }
    else if (!cycle[choice])
    {
        for (int i = choice; i != s; i = student[i]) {
            cnt++;
        }
        cnt++;
    }
    cycle[s] = true;
}

int main()
{
	cin.tie(0);
	cout.tie(0);
    ios::sync_with_stdio(false);

    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> student[i];
        }
        for (int i = 1; i <= n; i++)
        {
            if (!visit[i])
            {
                dfs(i);
            }
        }
        cout << n - cnt << "\n";

        for (int i = 1; i <= n; i++)
        {
            visit[i] = false;
            cycle[i] = false;
        }
        cnt = 0;
    }
}