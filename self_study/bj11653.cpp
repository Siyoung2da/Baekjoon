#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
   int N, x=2;

   cin >> N;
   if (N==1) return 0;
   else {
      while(1) {
         while(N%x != 0) {
            x++;
         }
         cout << x << endl;
         N = N/x;
         x = 2;
         if (N==1) 
            break;
      }
   }
}

