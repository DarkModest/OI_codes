#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e4+5; 
const int M = 2e5+5;
struct EDGE{
	int next, to;
}edge[M];
int head[M];
int cnt;
bool cut[N];
int low[N], dfn[N];
int flag[N];
int dfsclock;
int ans;

void add(int u, int v){
	edge[++cnt].next = head[u];
    head[u] = cnt;
	edge[cnt].to = v;
}
void uadd(int u, int v){
    add(u, v);
    add(v, u);
}

void tarjan(int u, int father){
	low[u] = dfn[u] = ++dfsclock;
	int child = 0;
	for(int i = head[u]; i; i = edge[i].next){
		int v = edge[i].to;
		if(!dfn[v]){
            child++;
            tarjan(v, i);
			low[u] = min(low[u], low[v]);
			//if(low[v] > dfn[u]) cut[i] = cut[i ^ 1] = 1;
			if(father != u && low[v] >= dfn[u] && !flag[u]){
				flag[u]	= true;
				ans++;
			}
		} else if(v != father) low[u] = min(low[u], dfn[v]);
	}
    if(father == u && child >= 2 && !flag[u]){
        flag[u] = true;
        ans++;
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
        if(!dfn[i]){
            dfsclock = 0;
            tarjan(i, i);
        }
    cout << ans << endl;
    for(int i = 1; i <= n; i++){
        if(flag[i]) cout << i << " ";
    }
	return 0;
}
