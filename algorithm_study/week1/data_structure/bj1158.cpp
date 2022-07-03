#include <iostream>
#include <queue>
#include <vector>
using namespace std;

queue<int> people;
vector<int> result;

int main() {
    int n, k;
    cin >> n >> k;
    for(int i=1;i<=n;i++)
        people.push(i);
    
    while(1) {
        for(int i=0;i<k;i++) {
            if(i==k-1) {
                result.push_back(people.front());
                people.pop();
            }
            else {
                people.push(people.front());
                people.pop();
            }
        }
        if(result.size()==n)
            break;
    }
    cout << "<";
    for(int i=0;i<result.size()-1;i++) {
        cout << result[i] << ", ";
    }
    cout << result[n-1] << ">" << "\n";
}