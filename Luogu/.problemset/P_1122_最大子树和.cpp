#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int INF = 2147483647;
const int N = 2e4;
int n;
int a[N];
struct EDGE{
    int nxt, to;
} e[N << 1];
int head[N], ecnt;
void add(int u, int v){
    e[++ecnt].nxt = head[u];
    e[ecnt].to = v;
    head[u] = ecnt;
}
void uadd(int u, int v){
    add(u, v);
    add(v, u);
}
int dp[N], vis[N];
void dfs(int u){
    vis[u] = 1;
    dp[u] = a[u];
    for(int i = head[u]; i; i = e[i].nxt){
        int to = e[i].to;
        if(vis[to]) continue;
        dfs(to);
        if(dp[to] > 0) dp[u] += dp[to];
    }
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i < n; i++){
        int u, v;
        cin >> u >> v;
        uadd(u, v);
    }
    int ans = -INF * 2;
    dfs(1);
    for(int i = 1; i <= n; i++) ans = max(ans, dp[i]);
    cout << ans << endl;
    return 0;
}