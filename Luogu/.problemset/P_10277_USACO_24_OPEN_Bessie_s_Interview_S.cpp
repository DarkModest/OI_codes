#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 3e5+5;
#define pii pair<int,int>
int n, k, a[N], vis[N], ans;
int st[N], e[N];
priority_queue<int,vector<int>,greater<int> > q;
set<int> s;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	// freopen("interview.in", "r", stdin);
    // freopen("interview.out", "w", stdout);
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= k; i++) {
        e[i] = a[i];
        q.push(e[i]);
    }
	for(int i = k + 1; i <= n; i++){
		int fro = q.top();
        q.pop();
        st[i] = fro, fro += a[i], e[i] = fro;
        q.push(fro);
	}
    cout << q.top() << endl;
    s.insert(q.top());
    for(int i = n; i >= 1; i--){
        if(s.find(e[i]) != s.end()){
            s.insert(st[i]);
            if(i <= k) vis[i] = 1;
        }
    }
	for(int i = 1; i <= k; i++) cout << vis[i];
    return 0;
}