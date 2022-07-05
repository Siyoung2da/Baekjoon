#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
#define Size 10001

int main() {
    int T, n;
    cin >> T;
   
   bool Flag;
    vector<bool> arr (Size, true);
    arr[0] = false;
    arr[1] = false; 
    for (int i=2;i<sqrt(Size);i++) {
        if (arr[i]==true) {
            for (int j=2*i;j<Size;j+=i) {
                arr[j] = false;
            }
        }
    } 
    for (int i=0;i<T;i++) {
        cin >> n;
        Flag = false;
        for (int j=n/2; j>=2; j--) {
            for (int k=n/2;k<=n-2;k++) {
                if (arr[j] == true && arr[k] == true) {
                    if (j+k>n) break;
                    if (j+k == n) {
                        cout << j << " " << k << endl;
                        Flag = true;
                        break;
                    }
                }
            }
            if(Flag) break;
        }
    }
}

