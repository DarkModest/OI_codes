//85 懒得调了
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int t;
int n, m, q;

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> n >> m >> q;
        vector<vector<int>> a(n + 1, vector<int>(m + 1));
        for(int j = 1; j <= q; j++){
            int opt, x, c;
            cin >> opt >> x >> c;
            if(opt == 0)
                for(int k = 1; k <= m; k++) a[x][k] = c;
            else 
                for(int k = 1; k <= n; k++) a[k][x] = c;
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}