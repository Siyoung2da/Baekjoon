#include <iostream>
#include <vector>
using namespace std;

int main() {
    while (1) {
        int k;
        cin >> k;
        if (k==0) break;

        vector<int> lotto;

        for (int i=0;i<k;i++) {
            int n;
            cin >> n;
            lotto.push_back(n);
        }
    }
}