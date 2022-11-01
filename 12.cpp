#include <bits/stdc++.h>
using namespace std;
int main () {
//infor. 1 tema2
int n;
cin>>n;
int arr[n][n];
for (int i=0 ; i<n ; i++) {
    for (int j=0 ; j<n ; j++) {
        if (i+j==n-1) {
            cout<<1<<" ";
        }
        if (i+j<n-1) {
            cout<<0<<" ";
        }
        if (i+j>n-1) {
            cout<<2<<" ";
        }
    } cout<<endl;
}

    return 0;
}