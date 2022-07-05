#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int x1, y1, r1, x2, y2, r2, T, d;
    cin >> T;

    for (int i=0;i<T;i++) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        d = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);

        if (x1==x2 && y1==y2 && r1==r2) {
            cout << -1 << endl;
        }
        else if (sqrt(d)>r1+r2) {
            cout << 0 << endl;
        }
        else if (sqrt(d)==r1+r2) {
            cout << 1 << endl;
        }
        else if (d == (r1-r2)*(r1-r2)) {
            cout << 1 << endl;
        }
        else if (d > (r1-r2)*(r1-r2)) {
            cout << 2 << endl;
        }
        else cout << 0 << endl;
    }
}

