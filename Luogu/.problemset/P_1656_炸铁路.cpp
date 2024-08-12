#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 10005;
struct EDGE{
	int next;
	int to;
} edge[N];
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
struct ANS{
	int a, b;
} ans[N];
int anscnt;
int dfn[N], low[N], dfsclock;
void tarjan(int x, int diff){
	low[x] = dfn[x] = ++dfsclock;
	for(int i = head[x]; i; i = edge[i].next){
		if(i == (diff ^ 1)) continue;
		int y = edge[i].to;
		if(!dfn[y]){
			tarjan(y, i);
			low[x] = min(low[x], low[y]);
			if(low[y] > dfn[x]){
				ans[++anscnt].a = x;
				ans[anscnt].b = y;
			}
		} else low[x] = min(low[x], dfn[y]);
	}
}

bool cmp(ANS x, ANS y){
	if(x.a == y.a) return x.b < y.b;
	return x.a < y.a;
}
signed main(){
	cout.tie(0); cin.tie(0);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		int a, b;
		cin >> a >> b;
		uadd(a, b);
	}
	for(int i = 1; i <= n; i++)
		if(!dfn[i]) tarjan(i, -1);
	sort(ans + 1, ans + anscnt + 1, cmp);
	for(int i = 1; i <= anscnt; i++){
		cout << ans[i].a << " " << ans[i].b << endl;
	}
	return 0;
}