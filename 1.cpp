#include <bits/stdc++.h>
using namespace std;
int main () {
int n,m;
cin>>n>>m;
char a1[n][m];
char c;
int cnt=0;
for (int i=0 ;i<n ; i++) 
    for (int j=0 ; j<m ; j++)
    cin>>a1[i][j];

for (int i=0 ;i<n ; i++) 
    for (int j=0 ; j<m ; j++) {
cin>>c;
if (a1[i][j]==c) 
cnt++;


    } cout<<cnt;
//misha nadoel

    return 0;
}