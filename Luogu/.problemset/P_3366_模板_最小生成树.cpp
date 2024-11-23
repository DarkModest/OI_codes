#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int n, m;
struct edge{
	int u, v, w;
} e[N];
bool cmp(edge x, edge y){
	return x.w < y.w;
}
int v[N];
int fa[N];
int f(int x){
	if(fa[x] != x) fa[x] = f(fa[x]);
	return fa[x];
}
void unity(int x, int y){
	int r1 = f(x);
	int r2 = f(y);
	if(r1 != r2) fa[r1] = r2;
}
int cnt;
int ans;
void kruskal(){
	sort(e + 1, e + m + 1, cmp);
	for(int i = 1; i <= m; i++){
		int u = f(e[i].u), v = f(e[i].v);
		if(u == v) continue;
		ans += e[i].w;
		unity(u, v);
		cnt++;
		if(cnt == n - 1) break;
	}
}
signed main(){
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= m; i++)
		cin >> e[i].u >> e[i].v >> e[i].w;
	for(int i = 1; i <= n; i++)
		fa[i] = i;
	kruskal();
	if(cnt == n - 1) cout << ans << endl;
	else cout << "orz" << endl;
	
	return 0;
}