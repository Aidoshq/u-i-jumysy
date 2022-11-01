#include <bits/stdc++.h>
using namespace std;
int main () {
//inform. 2tema 2
int n;
cin>>n;
int arr[n][n];

for (int i=0 ; i<n ; i++) {
    for (int j=0 ; j< n ; j++) {
        cin>>arr[i][j];
        if (arr[i][j]==arr[j][i]) {
            cout<<"Yes";
        } else {
            cout<<"No";
        }
           
    } 
} 

    return 0;
}