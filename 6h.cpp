#include <bits/stdc++.h>

using namespace std;

bool foo(string s) {
    for (int i=0 ; i<s.size() ; i++) {
        if (s[i]%2==1) {
            return false;
        }
    }
    return true;
}

int main () {
    string s;
    cin>>s;
    cout << (foo(s) ? "Valid" : "Not valid");
    return 0;
}