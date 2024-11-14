#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    int number;
    string str;

    cin >> number;
    for(int i=0;i<number;i++){
        
        cin >> str;
    
        for(int i = 0; i < str.length(); i += 2) {
            cout << str[i];
        }
    
        cout << " ";  

        for(int i = 1; i < str.length(); i += 2) {
            cout << str[i];
        }
        cout << endl;
    }
    return 0;
}


