#include <bits/stdc++.h>

using namespace std;

string change(string s){
    for(int i = 0;i < s.size();i+=2){
        if(s[i] <= 'z' && s[i] >= 'a'){
            s[i]-=32;
        }
    }

    return s;
}
int main(){
    string s;
    cin >> s;
    cout << change(s);
    return 0;
}