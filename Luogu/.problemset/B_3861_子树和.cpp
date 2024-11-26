#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e5;
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
int n, a[N];
int dis[N];
void dfs(int u, int fa){
    dis[u]++;
    for(int i = head[u]; i; i = e[i].nxt){
        int to = e[i].to;
        if(to == fa) continue;
        dfs(to, u);
        dis[u] += dis[to];
    }
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 1; i < n; i++){
        int u;
        cin >> u;
        uadd(i + 1, u);
    }
    dfs(1, 0);
    for(int i = 1; i <= n; i++) cout << dis[i] << endl;
    return 0;
}