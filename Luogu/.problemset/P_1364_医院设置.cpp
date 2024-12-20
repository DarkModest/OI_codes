#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 105;
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
int dis[N];
int dep[N];
int dp[N];
int ans;
void dfs(int u, int fa){
    dep[u] = dep[fa] + 1;
    for(int i = head[u]; i; i = e[i].nxt){
        int to = e[i].to;
        if(to == fa) continue;
        dfs(to, u);
        dis[u] += dis[to];
    }
}
void dfs2(int u, int fa){
    for(int i = head[u]; i; i = e[i].nxt){
        int to = e[i].to;
        if(to == fa) continue;
        dp[to] = dp[u] - dis[to] + (dis[1] - dis[to]);
        dfs2(to, u);
    }
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++){
        int w, u, v;
        cin >> w >> u >> v;
        a[i] = w;
        dis[i] = a[i];
        if(u)uadd(i, u);
        if(v)uadd(i, v);
    }
    dfs(1, 0);
    for(int i = 1; i <= n; i++)
        dp[1] += a[i] * (dep[i] - 1);
    ans = dp[1];
    dfs2(1, 0);
    for(int i = 1; i <= n; i++)
        if(dp[i])ans = min(ans, dp[i]);
    // for(int i = 1; i <= n; i++) cout << dis[i] << " "; cout << endl;
    // for(int i = 1; i <= n; i++) cout << dep[i] << " "; cout << endl;
    //for(int i = 1; i <= n; i++) cout << dp[i] << endl;
    cout << ans << endl;
    return 0;
}