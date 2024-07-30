#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int cases;
    cin >> cases;
    for(int ii = 1; ii <= cases; ii++){
        int n, k;
        cin >> n >> k;
        char s[1005][1005];
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> s[i][j];
            }
        }
        for(int i = 1; i <= n; i+=k){
            for(int j = 1; j <= n; j+=k){
                cout << s[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}