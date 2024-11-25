#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 3e5+5;
int n;
struct edge{
    int nxt, to;
} e[N << 1];
int head[N], ecnt;
int dis[N];
void add(int u, int v){
    e[++ecnt].nxt = head[u];
    e[ecnt].to = v;
    head[u] = ecnt;
}
void uadd(int u, int v){
    add(u, v);
    add(v, u);
}
void dfs(int u, int fa){
    int cnt = 0;
    for(int i = head[u]; i; i = e[i].nxt){
        int to = e[i].to;
        if(to == fa) continue;
        dfs(to, u);
        dis[u] += dis[to];
    }
    dis[u] ++;
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
    int maxx = 0, sum = 0;
    for(int i = head[1]; i; i = e[i].nxt){
        int to = e[i].to;
        sum += dis[to], maxx = max(maxx, dis[to]);
    }
    cout << sum - maxx + 1 << endl;
    return 0;
}