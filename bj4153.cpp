#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
#define Size 10001

int main() {
    int x, y, z;
    while (1) {
        cin >> x >> y >> z;
        if (x==0 && y==0 && z==0)
            break;
        

        if ((z*z == x*x + y*y) || (y*y == x*x + z*z) || (x*x == z*z + y*y))
            cout << "right" << endl;
        else
            cout << "wrong" << endl; 
    }
}

