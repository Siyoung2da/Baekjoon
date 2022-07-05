#include <iostream>
using namespace std;

int main() {
    int N, sum, count;
    cin >> N;
    sum = 0;
    count = 0;
    for (int i=0;i<N;i++) {
        sum = i;
        int j = i;
        while (j!=0) {
            sum += j%10;    
            j = j/10;
        }
        if (N == sum) {
            cout << i << endl;
            count++;
            break;
        }
    }
    if (count==0) cout << "0" << endl;
}