#include <iostream>
using namespace std;

void hanoi(int one, int two, int three, int n) {
    if (n==1) {
        cout << one << " " << three << "\n";
        return;
    }
    hanoi(one, three, two, n-1);
    cout << one << " " << three << "\n";
    hanoi(two, one, three, n-1);
}
int main() {
    int N, count;
    cin >> N;
    count = (1<<N) - 1;
    cout << count << endl;
    hanoi(1, 2, 3, N);
}