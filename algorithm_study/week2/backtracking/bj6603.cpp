#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (1) {
        int k;
        cin >> k;
        if (k==0) break;

        vector<int> check;
        vector<int> lotto;

        for (int i=0;i<k;i++) {
            int n;
            cin >> n;
            lotto.push_back(n);
        }
        for(int i=0;i<k;i++) {
            if(i<6) {
                check.push_back(0);
            }
            else 
                check.push_back(1);
        }
        do {
            for (int i=0;i<k;i++) {
                if(check[i]==0) {
                    cout << lotto[i] << " ";
                }
            }
            cout << "\n";
        }while(next_permutation(check.begin(), check.begin() + k));
        cout << "\n";
    }
}