#include <bits/stdc++.h>
using namespace std;
int main () {
int n;
cin>>n;
int arr[n];
for (int i=0 ; i<n ; i++) {
    cin>>arr[i];
    if (i%2==0) {
        cout<<arr[i]<<" ";
    }
}
//inf2

    return 0;
}