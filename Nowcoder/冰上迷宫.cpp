#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int n, m;
int sx,sy,ex,ey;
char c[55][55];
bool vis[55][55];

bool check(int x, int y){
    if(x > 0 && x <= n && y > 0 && y <= m && !vis[x][y] && (c[x][y] == '#' || c[x][y] == 'D'))
        return true;
    return false;
}
bool dfs(int x, int y){
    if(c[x][y] == 'D'){
        return true;
    }
    vis[x][y] = 1;
    if(check(x - 1, y)){
        if(dfs(x - 1, y)) return true;
    }
    if(check(x + 1, y)){
        if(dfs(x + 1, y)) return true;
    }
    if(check(x, y - 1)){
        if(dfs(x, y - 1)) return true;
    }
    if(check(x, y + 1)){
        if(dfs(x, y + 1)) return true;
    }
    vis[x][y] = 0;
    return false;
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> c[i][j];
    cin >> sx >> sy >> ex >> ey;
    c[ex][ey] = 'D';
    cout << (dfs(sx, sy) ? "Yes" : "No") << endl;
    return 0;
}