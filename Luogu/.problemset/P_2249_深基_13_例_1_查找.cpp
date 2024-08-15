#include<bits/stdc++.h>
using namespace std;
#define int long long

int n, m;
const int N = 1e6+5;
int a[N] = {};
signed main(){
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= m; i++){
		int num;
		cin >> num;
		int pos = lower_bound(a + 1, a + n + 1, num) - a;
		if(a[pos] != num) pos = -1;
		cout << pos << " ";
	}
	return 0;
}