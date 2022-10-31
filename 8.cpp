#include <bits/stdc++.h>

using namespace std;

int main () {

int n ,m;
    cin >> n >> m;
    char a[n][m];
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            cin >> a[i][j];
        }
    }
    int a2[n][m];
    for(int i = 0;i < n;i++){
        for(int j = 0; j < m;j++){
            cin >> a2[i][j];
        }
    }
    
    bool flag = true;
    for(int i = 0 ; i < n;i++){
        for(int j = 0;j < m;j++){
            if(a[i][j] == '.'){
                continue;
            }
            if(a2[i][j] == 0){
                if(a[i][j] != '.'){
                    flag = false;
                    break;
                }
            }else if(a2[i][j] == 1){
                if(a[i][j] != 'B'){
                    flag = false;
                    break;
                }
            }else if( a2[i][j] == 2){
                if(a[i][j] != 'G'){
                    flag = false;
                    break;
                }
            }else if( a2[i][j] == 3){
                if(a[i][j] != 'G' && a[i][j] !='B'){
                    flag = false;
                    break;
                }
            }else if( a2[i][j] == 4){
                if(a[i][j] != 'R' ){
                    flag = false;
                    break;
                }
            }else if( a2[i][j] == 5){
                if(a[i][j] != 'R' && a[i][j] != 'B' ){
                    flag = false;
                    break;
                }
            }else if( a2[i][j] == 6){
                if(a[i][j] != 'R' && a[i][j] != 'G'){
                    flag = false;
                    break;
                }
            }
        }
    }
//tablo 
    if(flag){
        cout << "YES";
    }else cout << "NO";



    return 0;
}