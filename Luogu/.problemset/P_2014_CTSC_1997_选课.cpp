#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 305;
struct edge{
    int nxt, to;
} e[N << 1];
int head[N], ecnt;
void add(int u, int v){
    e[++ecnt].nxt = head[u];
    e[ecnt].to = v;
    head[u] = ecnt;
}
int n, m, a[N];
int dp[N][N];
void dfs(int u){
    dp[u][1] = a[u];
    for(int i = head[u]; i; i = e[i].nxt)
        dfs(e[i].to);
    for(int i = head[u]; i; i = e[i].nxt)
        for(int j = m, to = e[i].to; j > 0; j--)
            for(int k = 0; k < j; k++)
                dp[u][j] = max(dp[u][j], dp[u][j - k] + dp[to][k]);
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    m++;
    for(int i = 1, s, k; i <= n; i++){
        cin >> k >> s;
        add(k, i);
        a[i] = s;
    }
    dfs(0);
    cout << dp[0][m] << endl;
    return 0;
}