#include <iostream>
#include <string>
using namespace std;

int N;

int main() {
    cin >> N;
    int six = 666; int count = 0;
    
    while (count != N) {
        string k = to_string(six);
        for (int i = 0; i < k.length() - 2; i++) {
            if (k[i] == '6' && k[i + 1] == '6' && k[i + 2] == '6') {
                count++;
                break;                    
            }
        }
        six++;
    }
    cout << six-1 << endl;
}