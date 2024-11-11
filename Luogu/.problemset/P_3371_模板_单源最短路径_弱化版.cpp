#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 5e5+5;
const int inf = 2147483647;
struct EDGE{
    int to, next, v;
} e[N];
int head[N];
int n, m, s, cnt;
int dis[N];
bool vis[N];

void add(int u, int v, int w){
    cnt++;
    e[cnt].to = v;
    e[cnt].next = head[u];
    e[cnt].v = w;
    head[u] = cnt;
}

void Dijkstra(){
    for(int i = 1; i <= n; i++)
        dis[i] = inf;
    dis[s] = 0;
    dis[0] = inf;
    while(true){
        int u = 0;
        for(int i = 1; i <= n; i++){
            if(!vis[i] && dis[u] > dis[i]){
                u = i;
            }
        }
        if(u == 0) break;
        vis[u] = 1;
        for(int i = head[u]; i; i = e[i].next){
            if(dis[e[i].to] > (long long)dis[u] + e[i].v)
                dis[e[i].to] = dis[u] + e[i].v;
        }
    }
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n >> m >> s;
    for(int i = 1, u, v, w; i <= m; i++){
        cin >> u >> v >> w;
        add(u, v, w);
    }
    Dijkstra();
    for(int i = 1; i <= n; i++)
        cout << dis[i] << " ";
    cout << endl;
    return 0;
}