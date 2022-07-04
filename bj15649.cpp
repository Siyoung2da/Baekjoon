#include <iostream>
using namespace std;

int arr[9];
bool isused[9];
int n, m;

void funct(int k) {
    if(k==m) {
        for(int i=0;i<m;i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i=1;i<=n;i++) {
        if(!isused[i]) {
            isused[i] = true;
            arr[k] = i;
            funct(k+1);
            isused[i] = false;
        }
    }
}

int main () {
    cin >> n >> m;
    funct(0);
}