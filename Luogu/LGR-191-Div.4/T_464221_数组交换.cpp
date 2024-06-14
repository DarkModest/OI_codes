#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, m, q;
    char a[1005][1005];
    cin >> n >> m >> q;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> a[i][j];

    for(int i = 1; i <= q; i++){
        int num, x, y;
        cin >> num >> x >> y;
        if(num == 1){
            if(x == y) continue;
            for(int j = 1; j <= m; j++)
                swap(a[x][j], a[y][j]);
        }
        if(num == 2){
            if(x == y) continue;
            for(int j = 1; j <= n; j++)
                swap(a[j][x], a[j][y]);
            
        }
        if(num == 3){
            cout << a[x][y] << endl;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}