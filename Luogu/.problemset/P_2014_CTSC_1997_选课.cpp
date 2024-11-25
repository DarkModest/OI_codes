#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1005;
int n, m;
struct EDGE{
    int nxt, to;
} e[N];
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

int dp[N];
int s[N];
void dfs(int u, int fa){
    for(int i = head[u]; i; i = e[i].nxt){
        int to = e[i].to;
        if(to == fa) continue;
        dfs(to, u);
        d = max(d, dp[u] + dp[to] + 1);
        dp[u] = max(dp[u], dp[to] + 1);
    }
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> s[i];
        int k;
        cin >> k;
        if(k) uadd(i, k);
    }
    dfs(1, 0);
    
    return 0;
}