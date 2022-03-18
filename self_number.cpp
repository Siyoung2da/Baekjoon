#include <iostream>
#include <vector>
using namespace std;

int d(int n) {
   int sum=n;
   while (n!=0) {
      sum += n%10;
      n = n/10;
   }
   return sum;
}

int main() {
   vector<bool> arr;
   arr.assign(10001, true);
   int no;
   for (int i=0;i<10001;i++) {
      no = d(i);
      if (no>10000)
         continue;
      arr[no] = false;
   }
   for (int i=0;i<10001;i++) {
      if(arr[i])
         cout << i << endl;
   }

}