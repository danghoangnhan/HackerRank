#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Library {
private:
   int returnDay, returnMonth, returnYear;
   int dueDay, dueMonth, dueYear;
   
public:
   // Constructor
   Library(int rd, int rm, int ry, int dd, int dm, int dy) {
       returnDay = rd;
       returnMonth = rm; 
       returnYear = ry;
       dueDay = dd;
       dueMonth = dm;
       dueYear = dy;
   }
   
   bool isReturnedOnTime() {
       return (returnYear < dueYear || 
               (returnYear == dueYear && returnMonth < dueMonth) ||
               (returnYear == dueYear && returnMonth == dueMonth && returnDay <= dueDay));
   }
   
   bool isSameMonth() {
       return (returnMonth == dueMonth && returnYear == dueYear);
   }
   
   bool isSameYear() {
       return (returnYear == dueYear);
   }
   
   int calculateFine() {
       if(isReturnedOnTime()) {
           return 0;
       }
       
       if(isSameMonth()) {
           return 15 * (returnDay - dueDay);
       }
       
       if(isSameYear()) {
           return 500 * (returnMonth - dueMonth);
       }
       
       return 10000;
   }
};

int main() {
   int rd, rm, ry;
   cin >> rd >> rm >> ry;
   
   int dd, dm, dy;
   cin >> dd >> dm >> dy;
   
   Library lib(rd, rm, ry, dd, dm, dy);
   cout << lib.calculateFine();
   
   return 0;
}