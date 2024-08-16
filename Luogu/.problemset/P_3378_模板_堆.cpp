#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
priority_queue<int, vector<int>, greater<int> > q;
signed main(){
	//ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int n, op, x;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> op;
		if(op == 1){
			cin >> x;
			q.push(x);
		}
		if(op == 2) cout << q.top() << endl;
		if(op == 3) q.pop();
	}
	return 0;
}