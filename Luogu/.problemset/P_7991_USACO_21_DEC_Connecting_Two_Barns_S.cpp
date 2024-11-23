#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long
#define endl '\n'
const int N = 5e5+5;

int t;
int fa[N];
int f(int x){
	if(x != fa[x])
		fa[x] = f(fa[x]);
	return fa[x];
}
void unity(int x, int y){
	int r1 = f(x);
	int r2 = f(y);
	if(r1 != r2) fa[r1] = r2;
}
int S[N], EE[N];
int s[N], e[N];
int n, m;
int ans;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--){
    	memset(s, 127, sizeof(s));
    	memset(e, 127, sizeof(e));
    	cin >> n >> m;
    	for(int i = 1; i <= n; i++)
			fa[i] = i;
		for(int i = 1; i <= m; i++){
			int u, v;
			cin >> u >> v;
			unity(u, v);
		}
		int r1 = f(1), rn = f(n);
		s[r1] = 0, e[rn] = 0;
		int cnts = 0, cnte = 0;
		for(int i = 1; i <= n; i++){
			int father = f(i);
			if(father == r1) S[++cnts] = i;
			else if(father == rn) EE[++cnte] = i;
		}
		
		for(int i = 1; i <= n; ++i){
			int u = f(i);
			int pos;
			if(u != r1){
				pos = upper_bound(S + 1, S + cnts + 1, i) - S - 1;
				//cout << pos << endl;
				s[u] = min(s[u], (i - S[pos]) * (i - S[pos]));
				if(pos < cnts){
					pos++;
					s[u] = min(s[u], (i - S[pos]) * (i - S[pos]));
				}
			}
			if(u != rn){
				pos = upper_bound(EE + 1, EE + cnte + 1, i) - EE;
				//cout << pos << endl;
				e[u] = min(e[u], (i - EE[pos]) * (i - EE[pos]));
				if(pos > 1){
					pos--;
					e[u] = min(e[u], (i - EE[pos]) * (i - EE[pos]));
				}
			}
		}
		ans = (n-1)*(n-1);
		for(int i = 1; i <= n; i++){
			int u = f(i);
			ans = min(ans, s[u] + e[u]);
		}
		cout << ans << endl;
	}
    return 0;
}