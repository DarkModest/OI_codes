#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e6+5;
int n;
int a[N];
struct EDGE{
    int next, to;
} e[N];
int head[N], v[N], vis[N];
int u, v, cnt;
void add(int u, int v){
    e[++cnt].next = head[u];
    e[cnt].to = v;
    head[u] = cnt;
}
void dfs(int u){

}
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 1; i <= n - 1; i++){
        cin >> u >> v;
        add(u, v);
    }
    return 0;
}