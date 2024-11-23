#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5+5;
int n;
struct edge{
	int u, v, w;
} e[25 * N];
int cnt;
void add(int u, int v, int w){
    cnt++;
    e[cnt].u = u, e[cnt].v = v, e[cnt].w = w;
}
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
int kcnt;
int ans;
void kruskal(){
	sort(e + 1, e + cnt + 1, cmp);
	for(int i = 1; i <= cnt; i++){
		int u = f(e[i].u), v = f(e[i].v);
		if(u == v) continue;
		ans += e[i].w;
		unity(u, v);
		kcnt++;
		if(kcnt == n - 1) break;
	}
}
struct point{
    int x, y;
}p[N];
bool cmp2(point x, point y){
    if(x.x == y.x) return x.y < y.y;
    return x.x < y.x;
}
int getdis(point x, point y){
    return pow(x.x - y.x, 2) + pow(x.y - y.y, 2);
}
signed main(){
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> n;
	for(int i = 1; i <= n; i++)
        cin >> p[i].x >> p[i].y;
    sort(p + 1, p + n + 1, cmp2);
	for(int i = 1; i <= n; i++)
		fa[i] = i;
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= min(n, i + 25); j++){
            add(i, j, getdis(p[i], p[j]));
        }
    }
    kruskal();
	cout << ans << endl;
	return 0;
}