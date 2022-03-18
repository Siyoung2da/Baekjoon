#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int fib(int n);
int main() {
    int N;
    cin >> N;
    cout << fib(N) << endl;
}
int fib(int n) {
    if (n==0) return 0;
    if (n==1) return 1;
    else 
        return fib(n-1)+fib(n-2);
}

