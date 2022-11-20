#include <bits/stdc++.h>
using namespace std;
int sum ( int a, int b) {
    
if (a>b) {
    
     return a-b;
} else {
    
   return b-a;
}

}

int main () {
int n;
cin>>n;
int a[n];
int b[n];
for (int i=0 ; i<n ; i++) {
    cin>>a[i];
}
for (int i=0; i<n ; i++) {
    cin>>b[i];
}
for (int i=0 ; i<n ; i++) {
    cout<<sum (a[i] , b[i])<<" ";
}

    return 0;
}