#include <bits/stdc++.h>
using namespace std;
int main () {

char a[4][4];
    for(int i = 0;i < 4;i++){
        for(int j = 0; j < 4;j++){
            cin >> a[i][j];
        }
    }
    
    bool flag = true;
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 3;j++){
            if(a[i][j] == a[i+1][j] && a[i][j] == a[i][j+1] && a[i][j]== a[i+1][j+1]){
                flag = false;
                break;
            }
        }
    }
    if(flag){
        cout << "Yes";
    }else{
        cout << "No";
    }



//misha nadoel part2


    return 0;
}