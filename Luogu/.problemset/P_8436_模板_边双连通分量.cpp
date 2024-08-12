#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 4e6+5; 
struct EDGE{
	int next, to;
}edge[N];
int head[N];
int cnt = 1;
void add(int u, int v){
	edge[++cnt].next = head[u];
    head[u] = cnt;
	edge[cnt].to = v;
}
void uadd(int u, int v){
    add(u, v);
    add(v, u);
}
bool cut[N];
int low[N], dfn[N];
int dfsclock;
void tarjan(int u, int diff){
	low[u] = dfn[u] = ++dfsclock;
	for(int i = head[u]; i; i = edge[i].next){
		if(i != (diff ^ 1)){
			int v = edge[i].to;
			if(!dfn[v]){
                tarjan(v, i);
				low[u] = min(low[u], low[v]);
				if(low[v] > dfn[u]) cut[i] = cut[i ^ 1] = 1;
			} else low[u] = min(low[u], dfn[v]);
		}
	}
}
int vis_dcc[N];
vector<vector<int>> dcc;
int ans;
void dfs(int u, int id){
	vis_dcc[u] = id, dcc[id - 1].push_back(u);
	for(int i = head[u]; i; i = edge[i].next){
		int v = edge[i].to;
		if(vis_dcc[v] || cut[i]) continue;
		dfs(v, id);
	} 
}
signed main(){
	cout.tie(0); cin.tie(0);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		int u, v;
		cin >> u >> v;
		uadd(u, v);
	}
	for(int i = 1; i <= n; i++)
        if(!dfn[i]) tarjan(i, -1);
    for(int i = 1; i <= n; i++)
        if(!vis_dcc[i]){
            dcc.push_back(vector<int>());
            dfs(i, ++ans);
		}
    cout << ans << endl;
    for(int i = 0; i < ans; i++){
        cout << dcc[i].size() << " ";
        for(auto j : dcc[i]) cout << j << " ";
        cout << endl;
    }
	return 0;
}
