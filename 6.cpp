#include <bits/stdc++.h>
using namespace std;
int main () {
int n;
cin>>n;
int arr[n];
int cnt=0;
for (int i=0 ; i< n ; i++) {
cin>>arr[i];
if (arr[i]<arr[i+1]) {
    cnt++;
}

} cout<<cnt;
//inf5
    return 0;
}