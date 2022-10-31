#include <bits/stdc++.h>
using namespace std;
int main () {
int n,m ;
cin>>n>>m ;
char arr[106][106];
int cnt=0;

for (int i=1 ;i<= n ; i++) {
    for (int j=1 ; j<=m ; j++) {
    cin>>arr[i][j];
    }
}
for (int i=0 ; i<n+1 ; i++) {
    arr[i][0]='.';
}
for (int i=0 ; i<m+2 ; i++) {
    arr[0][i]='.';
}
for (int i=0 ; i<m+1 ; i++) {
    arr[n+1][i]='.';
}
for (int i=0 ; i<n+1 ; i++) {
    arr[i][m+1]='.';
}
for (int i=1 ; i<=n ; i++) {
    for (int j=1 ; j<=m ; j++) {
        if (arr[i][j]=='.' && arr[i+1][j]=='.' && arr[i-1][j]=='.' && arr[i][j+1]=='.' && arr[i][j-1]=='.') {
            cnt++;
        }
    }
} cout<<cnt;
    return 0;
}
//morskoi tobeles((