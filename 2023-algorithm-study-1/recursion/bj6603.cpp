#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> box (14);
vector<int> lotto (14);
int T;

void dfs(int start, int depth) {
    if(depth == 6) {
        for (int i=0;i<6;i++) {
            cout << lotto[i] << " ";
        }
        cout << "\n";
        return ;
    }
    for (int i=start;i<T;i++) {
        lotto[depth] = box[i];
        dfs(i+1, depth+1);
    }

}

int main () {
    while (1) {
        cin >> T;
        if (T == 0) break;
        
        box.clear();
        lotto.clear();

        for (int i=0;i<T;i++) {
            int num;
            cin >> num;
            box.push_back(num);
        }
        sort(box.begin(), box.end());
        dfs(0, 0);
        cout << "\n";
    }  
}