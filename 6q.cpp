#include <bits/stdc++.h>

using namespace std;

float foo (float a , float b) {
    float k=(100*b)/a;
    return k;
}

int main () {
float a ,b ;
cin>>a>>b;
cout<<foo(a , b );
    return 0;
}