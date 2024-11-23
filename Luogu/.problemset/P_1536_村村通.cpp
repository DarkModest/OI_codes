#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1e6+5;
int fa[N], n, m, x, y;
int find(int x){
	if(x != fa[x])
		fa[x] = find(fa[x]);
	return fa[x];
}
void unity(int x, int y){
	int r1 = find(x);
	int r2 = find(y);
	fa[r1] = r2;
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    while(1){
        cin >> n;
    	if(n == 0) return 0;
    	cin >> m;
    	int ans = 0;
    	for(int i = 1; i <= n; i++)
    		fa[i] = i;
    	for(int i = 1; i <= m; i++){
    		cin >> x >> y;
    		unity(x, y);
		}
		for(int i = 1; i <= n; i++){
			if(find(i) == i) ans++;
		}
		cout << ans - 1 << endl;
	}
    return 0;
}