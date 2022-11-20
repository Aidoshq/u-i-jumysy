#include <bits/stdc++.h>

using namespace std;

bool vowelChk(char ch){
   if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U')
      return true;
   else
      return false;
}

string change(string s){
    string st = "";
    for(int i = 0; i < s.size();i++){
        if(!vowelChk(s[i])){
            st+=s[i];
        }
    }
    return st;
}
int main(){
    string s;
    getline(cin,s);
    cout <<change(s);
    
    return 0;
}
