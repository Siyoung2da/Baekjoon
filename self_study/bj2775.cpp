#include <iostream>
using namespace std;

int T;
int apt[15][15] = {};

int main() {
    
    for (int i = 0; i < 15; i++) {
        apt[0][i] = i+1;
    }

    for (int i = 1; i < 15; i++) {
        for (int j = 0;j<15;j++) {
            for (int k=0;k<=j;k++) {
                apt[i][j] += apt[i-1][k];
            }
        }
    }

    int k, n;
    cin >> T;
    while(T!=0) {
        cin >> k >> n;
        cout << apt[k][n-1] << endl;
        T--;
    }
}