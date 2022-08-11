#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> rope;

int main() {
    int k;
    cin >> k;
    for (int i=0;i<k;i++) {
        int x;
        cin >> x;
        rope.push_back(x);
    }
    sort(rope.begin(), rope.end());

    int max_weight = rope[0] * k;
    for (int i=1;i<k;i++) {
        int tmp = rope[i] * (k-i);
        if(max_weight < tmp)
            max_weight = tmp;
    }
    cout << max_weight << "\n";
}