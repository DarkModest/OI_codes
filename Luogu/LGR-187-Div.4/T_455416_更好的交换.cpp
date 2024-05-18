#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int n, m;
int a[1005][1005];

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= m; i++){
        int op;
        int x, y;
        int tmp[1005];
        cin >> op;
        cin >> x >> y;
        if(op){
            for(int j = 1; j <= n; j++)
                swap(a[x][j], a[y][j]);
        } else {
            for(int j = 1; j <= n; j++)
                swap(a[j][x], a[j][y]);
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}