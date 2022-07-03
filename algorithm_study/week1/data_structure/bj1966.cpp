#include <iostream>
#include <queue>
using namespace std;

queue<int> printer;

int main() {
    int T;
    cin >> T;
    for (int t=0;t<T;t++) {
        int n, m;
        cin >> n >> m;
        for(int i=0;i<n;i++) {
            int importance;
            cin >> importance;
            printer.push(importance);
        }
        while(1) {
            if(printer.front())
            
        }
    }
}