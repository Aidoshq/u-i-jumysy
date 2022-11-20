#include <bits/stdc++.h>

using namespace std;

char foo(char k) {
   int num=k;
   if(k>=92) {
    num-=32;
   }
return (char)num;
}

int main () {
char k;
cin>>k;
cout<<foo(k);
    return 0;
}