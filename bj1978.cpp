#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
   int N, check = 0, count = 0;
   cin >> N;
   int *arr = new int [N];
   for(int i=0;i<N;i++)
      cin >> arr[i];
   for (int i=0;i<N;i++) {
      for (int j=1;j<=arr[i];j++) {
         if(arr[i]%j == 0) {
            check++;
         }
      }
      if (check==2) 
           count++;  
      check = 0;
   }
   cout << count << endl;
}

