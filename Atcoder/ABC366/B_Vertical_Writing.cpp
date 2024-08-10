#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    char c[105][105] = {};
    int maxn = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        string s; 
        cin >> s;
        int len = s.length();
        for(int j = 0; j < len; j++){
            c[j][n - i] = s[j];
            maxn = max(maxn, len);
        }
    }
    for(int i = 0; i < maxn; i++){
        bool ok = 0;
        for(int j = n - 1; j >= 0; j--){
            if(c[i][j]){
                ok = 1;
            }
            if(ok){
                if(!(c[i][j])) c[i][j] = '*';
            }
        }
    }
    for(int i = 0; i < maxn; i++){
        for(int j = 0; j < n; j++){
            if(c[i][j]) cout << c[i][j];
        }
        cout << endl;
    }
    return 0;
}