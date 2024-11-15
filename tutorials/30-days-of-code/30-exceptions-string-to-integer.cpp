#include <bits/stdc++.h>

using namespace std;



int main()
{
    string S;
    getline(cin, S);
     try {
        int value = stoi(S);
        cout << value << endl;
    } catch (...) {
        cout << "Bad String" << endl;
    }
    return 0;
}
