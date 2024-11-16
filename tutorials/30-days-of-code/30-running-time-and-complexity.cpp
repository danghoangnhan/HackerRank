#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   int t;
   cin >> t;
   while(t--) {
       int n;
       cin >> n;
       bool isPrime = true;
       
       if(n == 1) {
           isPrime = false;
       }
       else {
           for(int i = 2; i <= sqrt(n); i++) {
               if(n % i == 0) {
                   isPrime = false;
                   break;
               }
           }
       }
       
       cout << (isPrime ? "Prime" : "Not prime") << endl;
   }
    return 0;
}
