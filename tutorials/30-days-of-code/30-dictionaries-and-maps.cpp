#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string ,string> dictionary;
    int testCase;
    string name,phoneNumber,query;
    cin>>testCase;
    while(testCase-->0){
        cin>>name>>phoneNumber;
        dictionary[name]   =   phoneNumber;
    }
    while(cin>>query){
        if(dictionary.find(query)!=dictionary.end()){
            cout<<query<<"="<<dictionary[query]<<endl;
        }else{
            cout<<"Not found"<<endl;
        }
    }
    
    return 0;
}
