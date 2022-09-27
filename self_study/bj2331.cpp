#include <iostream>
#include <cmath>
using namespace std;

int visit[300001];
int A, P, result;
void dfs(int s) {
    if (visit[s]==2) return;
    visit[s]++;
    int num = 0;
    while (s>0) {
        num += (int)pow((s%10), P);
        s /= 10;
    }
    dfs(num);
} 

int main() {
    cin >> A >> P;
    dfs(A);
    for(int i=0;i<300001;i++) {
        if(visit[i]==1)
            result++;
    }
    cout << result << "\n";
}