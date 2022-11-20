#include <bits/stdc++.h>

using namespace std;

int foo(int a, int b, int c, int d){
    int max = -1e9, arr[] = {a, b, c, d};
    for(int i = 0; i < 4; i++) if(max < arr[i]) max = arr[i];
    return max;
}

int main(){
    int a, b, c, d; cin >> a >> b >> c >> d;
    cout << foo(a, b, c, d);
}