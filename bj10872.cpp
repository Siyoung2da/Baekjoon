#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int factorial(int n);
int main() {
    int N;
    cin >> N;
    cout << factorial(N) << endl;
}
int factorial(int n) {
    if (n==0) return 1;
    if (n==1) return 1;
    else 
        return n*factorial(n-1);
}

