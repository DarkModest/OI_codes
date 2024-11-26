#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e5 + 5;
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
int n, a[N];
int dep[N];
int siz[N];
int ans[N];
int minn = 1e19;
void dfs(int u, int fa){
    ans[1] += dep[u] * a[u];
    siz[u] = a[u];
    for(int i = head[u]; i; i = e[i].nxt){
        int to = e[i].to;
        if(to == fa) continue;
        dep[to] = dep[u] + 1;
        dfs(to, u);
        siz[u] += siz[to];
    }
}
void dfs2(int u, int fa){
    for(int i = head[u]; i; i = e[i].nxt){
        int to = e[i].to;
        if(to == fa) continue;
        ans[to] = ans[u] - siz[to] + (siz[1] - siz[to]);
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
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    dfs(1, 0);
    dfs2(1, 0);
    for(int i = 1; i <= n; i++)
        minn = min(minn, ans[i]);
    cout << minn << endl;
    return 0;
}