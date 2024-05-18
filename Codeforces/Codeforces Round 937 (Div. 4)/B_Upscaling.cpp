#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

char c[405][405];

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int a;
    cin >> a;
    for(int k = 1; k <= a; k++){
        int n;
        cin >> n;
        for(int i = 1; i <= 2 * n; i += 2){
            for(int j = 1; j <= 2 * n; j += 2){
                if(i % 4 == 1){
                    if(j % 4 == 1){
                        c[i][j] = '#';
                        c[i + 1][j] = '#';
                        c[i][j + 1] = '#';
                        c[i + 1][j + 1] = '#';
                    } else if(j % 4 == 3){
                        c[i][j] = '.';
                        c[i + 1][j] = '.';
                        c[i][j + 1] = '.';
                        c[i + 1][j + 1] = '.';
                    }
                } else if(i % 4 == 3){
                    if(j % 4 == 1){
                        c[i][j] = '.';
                        c[i + 1][j] = '.';
                        c[i][j + 1] = '.';
                        c[i + 1][j + 1] = '.';
                    } else if(j % 4 == 3){
                        c[i][j] = '#';
                        c[i + 1][j] = '#';
                        c[i][j + 1] = '#';
                        c[i + 1][j + 1] = '#';
                    }
                }
            }
        }
        for(int i = 1; i <= 2 * n; i++){
            for(int j = 1; j <= 2 * n; j++){
                cout << c[i][j];
            }
            cout << endl;
        }
    }
    
    return 0;
}