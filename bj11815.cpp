#include <iostream>
#include <cmath>
using namespace std;

long long ncase[100];

int main () {
    int N;
    cin >> N;
    
    for (int i=0;i<N;i++)
        cin >> ncase[i];
    
    for (int i=0;i<N;i++) {
        long long a = (long long)sqrt(ncase[i]);
        
        if (a*a==ncase[i])
            cout << 1 << " ";
        else    cout << 0 << " ";
    }

}