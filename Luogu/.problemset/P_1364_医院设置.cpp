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
int dp[N], vis[N];
int ans;
void dfs(int u){
    vis[u] = 1;
    dp[u] = a[u];
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin << n;
    for(int i = 1; i <= n; i++){
        int w, u, v;
        cin >> w >> u >> v;
        a[i] = w;
        if(u && v) uadd(u, v);
    }
    
    return 0;
}