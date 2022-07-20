#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int n, e, cnt = 0;
int computer[101][101];
queue<int> q;
bool visit[101];

void bfs(int s) {
    visit[s] = true;
    q.push(s);

    while(!q.empty()) {
        int x = q.front();
        q.pop();
        for(int i=1;i<=n;i++) {
            if(!visit[i] && computer[x][i]==1) {
                visit[i] = true;
                q.push(i);
                cnt++;
            }
        }
    }
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    cin >> n >> e;
    for (int i=0;i<e;i++) {
        int a, b;
        cin >> a >> b;
        computer[a][b] = 1;
        computer[b][a] = 1;
    }
    bfs(1);
    cout << cnt << "\n";
}