#include <bits/stdc++.h>

using namespace std;

int sumdig(int n){
    int sum = 0;
    while(n>0){
        int k = n%10;
        sum +=k;
        n/=10;
    }
    return sum;
}
int main(){

    int n;

    cin >> n;

    cout << sumdig(n);
    
    return 0;
}
