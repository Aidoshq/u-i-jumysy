#include <bits/stdc++.h>
using namespace std;
bool foo(string str, int a){

    int cnt = 0; 

    for(int i = 0; i < str.size(); i++){

        if(str[i] >= '0' and str[i] <= '9') cnt++;

        else cnt = 0;

        if(cnt == a) return true;

    }

    return false;

}




int main(){

    string s; cin >> s;

    int n; cin >> n;

    cout << (foo(s, n) ? "Valid" : "Not valid");

}
