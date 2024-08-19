#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 205;
int n, q;
struct EDGE{
    int next, to, w;
} e[2 * N];
int head[N], sz[N];
int u, v, w, cnt;
int dp[N][N];
void add(int u, int v, int w){
    e[++cnt].next = head[u];
    e[cnt].to = v;
    e[cnt].w = w;
    head[u] = cnt;
}
void dfs(int u, int fa){
    for(int i = head[u]; i; i = e[i].next){
        int v = e[i].to;
        if(v == fa) continue;
        dfs(v, u);
        sz[u] += sz[v] + 1;
        for(int j = min(sz[u], q); j >= 0; j--){
            for(int k = min(sz[v], j - 1); k >= 0; k--){
                dp[u][j] = max(dp[u][j], dp[u][j - k - 1] + dp[v][k] + e[i].w);
            }
        }
    }
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n >> q;
    for(int i = 1; i <= n - 1; i++){
        cin >> u >> v >> w;
        add(u, v, w);
        add(v, u, w);
    }
    dfs(1, -1);
    cout << dp[1][q] << endl;
    return 0;
}