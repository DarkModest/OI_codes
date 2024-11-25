#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 2e5+5;
const int inf = 2e9;
int V, S;
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
int dp[N];
int sum;
void dfs(int u, int fa, int lim){
    int maxn = 0;
    for(int i = head[u]; i; i = e[i].nxt){
        int to = e[i].to;
        if(to == fa) continue;
        dfs(to, u, lim);
        if(dp[to] + maxn > lim){
            sum ++;
            maxn = min(maxn, dp[to]);
        } else maxn = max(maxn, dp[to]);
    }
    dp[u] = maxn + 1;
}
bool check(int x){
    sum = 0;
    dfs(1, 0, x);
    return sum <= S;
}
int ans;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> V >> S;
    for(int i = 1; i < V; i++){
        int u, v;
        cin >> u >> v;
        uadd(u, v);
    }
    int l = 0, r = V;
    while(l <= r){
        int mid = l + r >> 1;
        if(check(mid)){
            ans = mid;
            r = mid - 1;
        } else 
            l = mid + 1;
    }

    cout << ans << endl;
    return 0;
}