#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e6+5;
struct EDGE{
    int next, to;
}e[2 * N];
int head[N];
int n, k;
int a, b;
int v[N];
int cnt;
int rt;
void add(int u, int v){
    e[++cnt].next = head[u];
    e[cnt].to = v;
    head[u] = cnt;
}
int dfs(int u, int fa){
    int res = 0;
    for(int i = head[u]; i; i = e[i].next){
        int v = e[i].to;
        if(v == fa) continue;
        res += dfs(v, u);
    }
    if(res || v[u]) res++;
    return res;
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n >> k;
    for(int i = 1; i < n; i++){
        cin >> a >> b;
        add(a, b);
        add(b, a);
    }
    for(int i = 1; i <= k; i++){
        int x;
        cin >> x;
        v[x] = 1;
        rt = x;
    }
    cout << dfs(rt, -1) << endl;
    return 0;
}