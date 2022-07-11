#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<bool> vec (4000001, true);
    vector<int> mem;

    vec[0] = false;
    vec[1] = false;
    for(int i=2;i<=sqrt(4000001);i++) {
        if(vec[i]==true) {
            for(int j=2*i;j<=4000001;j+=i) {
                vec[j] = false;
            }
        }
    }
    for (int i=2;i<=n;i++) {
        if(vec[i]==true)
            mem.push_back(i);
    }
    int result = 0, cnt = 0;
    while(1) {
        int i = 0;
        result += mem[i];
        if (result == n) {
            cnt++;
            break;
        }
        else if (result>n) {
            break;
        }
    }
    cout << cnt << "\n";
}