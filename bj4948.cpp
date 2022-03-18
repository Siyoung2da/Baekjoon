#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
   int n, count=0;
   vector <int> check (246913, 1);
   check[0] = 0;
   check[1] = 0;
   for (int i=2;i<=sqrt(246912);i++) {
      if (check[i]==1) {
          for (int j=2*i;j<=246912;j+=i) {
             check[j] = 0;
          }
      }
   }
   while (1) {
      cin >> n;
      if(n==0) break;
      for (int i=n+1;i<=2*n;i++) {
         if (check[i]==1) count++;
      }
      cout << count << endl;
      count = 0;
   }
}

/*
   vector<int> arr; 
   while(1) {
      cin >> n;
      if (n==0) break;
      arr[count] = n;
      count++;
   }
   
   count = 0;
   int x, i = 0;

   while (arr[i]!=0) {
      x = arr[i];
      int *check = new int(2*x+1);
      fill (check, check+2*x, 1);
      check[0]=0;
      check[1]=0;
      for (int j=2;j<=sqrt(2*x);j++) {
         if(check[j]==1) {
            for (int k=2*j;k<=2*x;k+=j) {
                check[x] = 0;
            }
         }
      }
      for (int j=x+1;j<=2*x;j++) {
         if(check[j] == 1) count++;
         cout << count << endl;
      }
      delete [] check;
      count = 0;
      i++;
   }
   */


