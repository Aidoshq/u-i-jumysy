#include <bits/stdc++.h>
using namespace std;
int main () {
int n;
cin>>n;
int arr[n];
int cnt=0;
for (int i=0 ; i<n ; i++) {
    cin>>arr[i];
    if (arr[i]>0) {
        cnt++;

    }
} cout<<cnt;

//inf4
    return 0;
}