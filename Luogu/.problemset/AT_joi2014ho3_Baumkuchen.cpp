#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e5+5;
int n;
int a[N];
int sum[2 * N];
bool check(int val){
	int p1 = 1, p2 = 1;
	for(int i = 1; i <= n; i++){
		while(p1 < n + i && sum[p1] - sum[i] < val) ++p1;
		while(p2 < n + i && sum[p2] - sum[p1] < val) ++p2;
		if(sum[n + i] - sum[p2] >= val) return true;
	}
	return false;
}
signed main(){
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	//freopen("split.in", "r", stdin);
	//freopen("split.out", "w", stdout);

	cin >> n;
	sum[0] = 0;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		sum[i] = sum[i - 1] + a[i];
	}
	for(int i = 1; i <= n; i++) sum[n + i] = sum[n + i - 1] + a[i];
	int l = 0, r = sum[n] / 3;
	while(l < r){
		int mid = (l + r + 1) >> 1;
		if(check(mid))
			l = mid;
		else
			r = mid - 1;
	}
	cout << l << endl;
	return 0;
} 