#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N =5e5+5;
int n, m, s;
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
int lowbit(int x){
    return x & -x;
}
int fa[N][20];
int d[N];
void dfs(int u, int father){
    for(int i = head[u]; i; i = e[i].nxt){
        int to = e[i].to;
        if(to == father) continue;
        d[to] = d[u] + 1;
        fa[to][0] = u; // 点to的第2^0个祖先就是它的父节点
        dfs(to, u);
    }
}
void init(){ //预处理fa数组
    for(int j = 1; j <= 18; j++)
        for(int i = 1; i <= n; i++)
            fa[i][j] = fa[fa[i][j - 1]][j - 1];
}
int LCA(int a, int b){
    if(d[a] < d[b]) swap(a, b);
    for(int i = 18; i >= 0; i--)
        if(d[fa[a][i]] >= d[b]) a = fa[a][i];
    if(a == b) return a;
    for(int i = 18; i >= 0; i--)
        if(fa[a][i] != fa[b][i])
            a = fa[a][i], b = fa[b][i];
    return fa[a][0];
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> m >> s;
    for(int i = 1; i < n; i++){
        int u, v;
        cin >> u >> v;
        uadd(u, v);
    }
    d[s] = 1; dfs(s, 0);
    init();
    while(m--){
        int a, b;
        cin >> a >> b;
        cout << LCA(a, b) << endl;
    }
    return 0;
}