#include <bits/stdc++.h>
using namespace std;
void howmany(int a[], int b[], int n){
    int a1[100], b1[100], cnt = 0;
    for(int i = 1; i <= 100; i++){
        a1[i] = 0;
        b1[i] = 0;
    }
    for(int i = 1; i <= n; i++){ 
               
        a1[a[i]]++;  
        b1[b[i]]++;  
    }
    for(int i = 1; i <= 100; i++){
        cnt += min(a1[i], b1[i]);  
    }
    cout << cnt;
}

int main(){
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++){
        cin >> b[i];
    }
    howmany(a,b,n);
}
