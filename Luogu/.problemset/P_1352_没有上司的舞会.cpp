#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e4 + 5;
struct EDGE{
	int next, to;
} t[N];
int head[N];
int cnt;
bool vis[N];
int dp[N][3];
int n;
int u, v;
int rootcnt[N];
int root;
void add(int u, int v){
	t[++cnt].next = head[u];
	t[cnt].to = v;
	head[u] = cnt;
}
void dfs(int u){
	vis[u] = true;
	for(int i = head[u]; i; i = t[i].next){
		int v = t[i].to;
		if(!vis[v]){
			dfs(v);
			dp[u][1] += dp[v][0];
			dp[u][0] += max(dp[v][0], dp[v][1]);
		}
	}
}
signed main(){
	//memset(head, -1, sizeof(head));
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> dp[i][1];
	for(int i = 1; i <= n - 1; i++){
		cin >> u >> v;
		//add(u, v);
		add(v, u);
		rootcnt[u]++;
	}
	
	for(int i = 1; i <= n; i++)
		if(!rootcnt[i])
			root = i;
	dfs(root);
	cout << max(dp[root][0], dp[root][1]) << endl;
	return 0;
}