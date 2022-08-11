#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main () {
    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int> > min_heap;

    for (int i=0;i<n;i++) {
        int x;
        cin >> x;
        if (x==0) {
            if(min_heap.empty()) {
                cout << "0" << "\n";
            }
            else {
                cout << min_heap.top() << "\n";
                min_heap.pop();
            }
        }
        else if (x!=0) {
            min_heap.push(x);
        }
    }
}