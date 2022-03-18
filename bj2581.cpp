#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
   int M, N, sum=0, min, count=0;

   cin >> M >> N;

   for (int i=N;i>=M;i--) {
      for (int j=i;j>=1;j--) {
         if (i%j == 0) count++;
      }
      if (count==2) {
            sum += i;
            min = i;
         }
      count = 0;
   }
   if (sum==0) {
      cout << sum-1 << endl;
   }
   else {
      cout << sum << endl << min << endl;
   }
}

