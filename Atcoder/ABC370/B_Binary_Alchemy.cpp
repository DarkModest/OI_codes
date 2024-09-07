#include<bits/stdc++.h>
using namespace std;

int n;
int a[105][105];
int ans = 1;
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        if(!(ans >= i)) ans = a[i][ans];
        else ans = a[ans][i];
    }
    cout << ans << endl;
    return 0;
}