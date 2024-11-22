#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int MOD =  80112002;
const int N = 5e5+5;
struct edge{
    int nxt, to;
} e[N];
int head[N];
int ecnt;
int in[N], out[N];
int num[N];
int ans;
int n, m;
void add(int u, int v){
    e[++ecnt].nxt = head[u];
    e[ecnt].to = v;
    head[u] = ecnt;
}
void topsort(){
    queue<int> q;
    for(int i = 1; i <= n; i++)
        if(!in[i]){
            q.push(i);
            num[i] = 1;
        }
    while(!q.empty()){
        int fro = q.front();
        q.pop();
        for(int i = head[fro]; i; i = e[i].nxt){
            --in[e[i].to];
            num[e[i].to] = (num[e[i].to] + num[fro]) % MOD;
            if(!in[e[i].to]) q.push(e[i].to);
        }
    }
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int u, v;
        cin >> u >> v;
        add(u, v);
        in[v]++, out[u]++;
    }
    topsort();
    for(int i = 1; i <= n; i++){
        if(!out[i])
            ans = (ans + num[i]) % MOD;
    }
    cout << ans << endl;
    return 0;
}