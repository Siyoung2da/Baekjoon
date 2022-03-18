#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
#define Size 10001

int main() {
    int x, y, w, h, min1, min2;
    cin >> x >> y >> w >> h;

    if ((h-y)>y) {
        min1 = y;
    }
    else min1 = h-y;
    
    if ((w-x)>x) min2 = x;
    else min2 = w-x;

    if (min1>min2) cout << min2 << endl;
    else cout << min1 << endl;

}