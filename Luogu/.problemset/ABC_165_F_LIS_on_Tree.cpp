#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 2e5+5;
int n, a[N];
struct E{
	int u, v;
} ee[2 * N];
struct EDGE{
	int nxt, to;
} e[2 * N];
int head[N], ecnt;
void add(int u, int v){
	e[++ecnt].nxt = head[u];
	e[ecnt].to = v;
	head[u] = ecnt;
}
void uadd(int u, int v){
	add(v, u);
	add(u, v);
}
int ans[N];
int vis[N];
int lis[N];
int cnt = 1;
bool cmp(E a, E b){
	if(a.u == b.u) return a.v > b.v;
	return a.u > b.u;
}
void dfs(int u){
    if(vis[u]) return;
	vis[u] = 1;
    bool F = 0;
    int pos;
//	cout << "u = "<< u << endl;
//	for(int i = 1; i <= cnt; i++) cout  << lis[i] << " "; cout << endl;
//	cout << "qwq" << a[lis[cnt]] << endl;
	if(a[u] > a[lis[cnt]]){
		lis[++cnt] = u;
		ans[u] = cnt;
        F = 1;
	}
	else {
		pos = lower_bound(lis + 1, lis + cnt + 1, a[u]) - lis;
		ans[u] = pos;
	}
	for(int i = head[u]; i; i = e[i].nxt){
		int to = e[i].to;
		if(!vis[to]){
			//cout << "to=" << to << endl;
			dfs(to);			
		}
	}
	if(F) cnt--;
    else ans[pos] = cnt;
}

void fre(){
	freopen("lis.in", "r", stdin);
	freopen("lis.out", "w", stdout);
}
signed main(){
	//fre();
	ios::sync_with_stdio(false); cin.tie(0);
	lis[1] = 1;
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	for(int i = 1; i < n; i++){
		cin >> ee[i].u >> ee[i].v;
		//cout << ee[i].u << ee[i].v << " ";
	}
	sort(ee + 1, ee + n, cmp);
	for(int i = 1; i < n; i++)
		uadd(ee[i].u, ee[i].v);
	dfs(1);
	for(int i = 1; i <= n; i++)
		cout << ans[i] << endl;
	return 0;
}
/*
10
1 2 5 3 4 6 7 3 2 4
1 2
2 3
3 4
4 5
6
6 7
1 8
8 9
9 10
*/
