#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e5+5;
int n;
int a[N];
struct EDGE{
    int nxt, to, w;
} e[N << 1];
int head[N], ecnt;
void add(int u, int v, int w){
    e[++ecnt].nxt = head[u];
    e[ecnt].to = v;
    e[ecnt].w = w;
    head[u] = ecnt;
}
void uadd(int u, int v, int w){
    add(u, v, w);
    add(v, u, w);
}
int dis[N];
int siz[N];
int dp[N];
int ans;
void dfs(int u, int fa){
    siz[u] = a[u];
    for(int i = head[u]; i; i = e[i].nxt){
        int to = e[i].to;
        if(to == fa) continue;
        dfs(to, u);
        siz[u] += siz[to];
        dis[u] += dis[to] + siz[to] * e[i].w;
    }
}
void dfs2(int u, int fa){
    for(int i = head[u]; i; i = e[i].nxt){
        int to = e[i].to;
        if(to == fa) continue;
        dp[to] = dp[u] - siz[to] * e[i].w + (siz[1] - siz[to]) * e[i].w;
        dfs2(to, u);
    }
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1, u, v, w; i < n; i++){
        cin >> u >> v >> w;
        uadd(u, v, w);
    }
    dfs(1, 0);
    ans = dp[1] = dis[1];
    dfs2(1, 0);
    for(int i = 1; i <= n; i++)
        if(dp[i])ans = min(ans, dp[i]);
    // for(int i = 1; i <= n; i++) cout << dp[i] << " "; cout << endl;
    // for(int i = 1; i <= n; i++) cout << dep[i] << " "; cout << endl;
    // for(int i = 1; i <= n; i++) cout << f[i] << " "; cout << endl;
    cout << ans << endl;
    return 0;
}