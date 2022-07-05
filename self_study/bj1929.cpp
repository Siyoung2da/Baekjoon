#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
   int M, N;
   cin >> M >> N;

   vector<bool> arr(N+1,true);
   
   arr[0] = false;
   arr[1] = false;
   for (int i=2;i<=sqrt(N);i++) {
      if (arr[i]==true){
         for(int j=2*i;j<=N; j+=i){
            arr[j] = false;
         }
      }
   }
   for(int i=M;i<=N; i++) {
      if(arr[i]==true)
         cout << i << endl;
   }
   return 0;
}

