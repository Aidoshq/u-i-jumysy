#include <bits/stdc++.h>
using namespace std;
 double  hyp(int x , int y ) {
    return sqrt(x*x+y*y);
    
 }

 int main () {
    int a,b;
    cin>>a>>b;
    cout<<setprecision(4)<<hyp(a , b);

    return 0;
 }