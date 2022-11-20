#include <bits/stdc++.h>

using namespace std;

int foo(int n) {
    if (n<0) {
    n*=-1;
    }
    return n;
}

int main () {
    int n ;
    cin>>n;
    cout<<foo(n);
    return 0;
}