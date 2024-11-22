#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e6+5;
int n, m;
struct edge{
	int to, nxt;
} e[N];
struct edge2{
	int u, v;
} e2[N];
int head[N];
int ecnt;
void add_edge(int u, int v){
	e[++ecnt].nxt = head[u];
	e[ecnt].to = v;
	head[u] = ecnt;
}
vector<int> ans, ans2;
int v[N];
int cnt;
bool cmp(edge2 x, edge2 y){
	if(x.u == y.u) return x.v > y.v;
	return x.u > y.u;
}
void dfs(int u){
	v[u] = 1;
	ans.push_back(u); 
	for(int i = head[u]; i; i = e[i].nxt){
		int to = e[i].to;
		if(!v[to]) dfs(to);
	}
}
void bfs(int u){
	queue<int> q;
	q.push(u);
	v[u] = 1;
	ans2.push_back(u);
	while(!q.empty()){
		int fro = q.front();
		for(int i = head[fro]; i; i = e[i].nxt){
			int to = e[i].to;
			if(!v[to]){
				q.push(to);
				v[to] = 1;
				ans2.push_back(to);
			}
		}
		q.pop();
	}
}
signed main(){
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		cin >> e2[i].u >> e2[i].v;
	}
	sort(e2 + 1, e2 + m + 1, cmp);
	for(int i = 1; i <= m; i++)
		add_edge(e2[i].u, e2[i].v);
	dfs(1);
	for(auto i : ans) cout << i << " ";
	cout << endl;
	memset(v, 0, sizeof(v));
	cnt = 0;
	bfs(1);
	for(auto i : ans2) cout << i << " ";
	
	return 0;
}