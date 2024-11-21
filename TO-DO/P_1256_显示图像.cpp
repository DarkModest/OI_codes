#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

const int N = 200;
int n, m;
int a[N][N];
int b[N][N];
void dfs(int sx, int sy, int x, int y){
    if(a[x][y] == 1)
        b[x][y] = min(a[x][y], abs(sx - x) - abs(sy - y));
    if(x > y)
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            char c;
            cin >> c;
            a[i][j] = c - '0';
        }
    }
    dfs(1, 1);
    return 0;
}