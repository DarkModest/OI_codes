#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1005;
int n, m;
int a[N][N];
int l, r;
int x, y;
int flag;
int dirx[4] = {-1, 1, 0, 0};
int diry[4] = {0, 0, -1, 1};
int vis[N][N];
int mid;

void dfs(int xx, int yy){
	if(xx == n){
		flag = 1;
		return;
	}
	for(int i = 0; i < 4; i++){
		x = xx + dirx[i];
		y = yy + diry[i];
		if((1 <= x && x <= n) && (1 <= y && y <= m) && !vis[x][y] && a[x][y] <= mid) {
			vis[x][y] = 1;
			dfs(x, y);
			vis[x][y] = 0;
			if(flag) break;
		}
	}
}
bool check(){
	flag = 0;
	memset(vis, 0, sizeof(vis));
	dfs(1, 1);
	return flag;
}
signed main(){
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	//freopen("escape.in", "r", stdin);
	//freopen("escape.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
			r = max(r, a[i][j]);
		}
	}
	while(l <= r){
		mid = l + r >> 1;
		if(check()){
			r = mid - 1;
		} else {
			l = mid + 1;
		}
	}
	cout << l << endl;
	return 0;
}
