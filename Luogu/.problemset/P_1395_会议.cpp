#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 5e4+5;
int n;
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
int siz[N];
int dep[N];
int dp[N];
int ans, pos;
void dfs(int u, int fa){
    siz[u] = 1;
    dep[u] = dep[fa] + 1;
    for(int i = head[u]; i; i = e[i].nxt){
        int to = e[i].to;
        if(to == fa) continue;
        dfs(to, u);
        siz[u] += siz[to];
    }
}
void dfs2(int u, int fa){
    for(int i = head[u]; i; i = e[i].nxt){
        int to = e[i].to;
        if(to == fa) continue;
        dp[to] = dp[u] - siz[to] + (siz[1] - siz[to]);
        dfs2(to, u);
    }
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 1; i < n; i++){
        int u, v;
        cin >> u >> v;
        uadd(u, v);
    }
    dfs(1, 0);
    for(int i = 1; i <= n; i++)
        dp[1] += dep[i];
    dp[1] -= n;
    dfs2(1, 0);
    ans = dp[1];
    for(int i = 1; i <= n; i++)
        if(dp[i] < ans){
            ans = dp[i];
            pos = i;
        }
    // for(int i = 1; i <= n; i++) cout << dis[i] << " "; cout << endl;
    // for(int i = 1; i <= n; i++) cout << dep[i] << " "; cout << endl;
    // for(int i = 1; i <= n; i++) cout << dp[i] << endl;
    cout << pos << " " << ans << endl;
    return 0;
}