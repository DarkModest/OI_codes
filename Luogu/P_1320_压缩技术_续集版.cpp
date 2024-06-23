#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string s;
    char a[205][205];
    cin >> s;
    int n = s.size();
    for(int i = 1; i <= n; i++)
        a[i][1] = s[i - 1];
    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << a[i][j];
        }
        cout << endl;
    }
    
    cout << n << " ";
    char combo = '0';
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(combo == a[i][j]){
                cnt++;
            } else {
                cout << cnt << " ";
                cnt = 0;
                combo = a[i][j];
            }
        }
    }
    return 0;
}