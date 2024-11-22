#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e5+5;

struct edge{
	int nxt, to;
} e[N];
int cnt;
int head[N];
void add_edge(int u, int v){
	e[++cnt].to = v;
	e[cnt].nxt = head[u];
	head[u] = cnt;
}
int n, m;
int ans[N];
void dfs(int u, int fa){
	if(ans[u]) return;
	ans[u] = fa;
	for(int i = head[u]; i; i = e[i].nxt)
		dfs(e[i].to, fa);
}
signed main(){
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		int u, v;
		cin >> u >> v;
		add_edge(v, u);
	}
	for(int i = n; i >= 1; i--)
		dfs(i, i);
	for(int i = 1; i <= n; i++)	
		cout << ans[i] << " ";
	return 0;
}