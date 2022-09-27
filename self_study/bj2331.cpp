#include <iostream>
#include <cmath>
using namespace std;

int visit[100001];
int A, P, result;
void dfs(int s) {
    if (visit[s]==2) return;
    visit[s]++;
    int num = 0;
    while (s>0) {
        num += pow(s, P);
        s /= 10;
    }
    dfs(num);
} 

int main() {
    cin >> A >> P;
    dfs(A);
    int i = 0;
    for(int i=0;i<100001;i++) {
        if(visit[i]==1)
            result++;
        i++;
    }
    cout << result << "\n";
}