#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1005;
int n, m;
int dp[N], w[N], v[N];
signed main(){
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	
	cin >> n >> m;
	for(int i = 1; i <= m; i++)
		cin >> w[i] >> v[i];
	for(int i = 1; i <= m; i++){
		for(int j = n; j >= w[i]; j--){
			dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
		}
	}
	cout << dp[n] << endl;
	return 0;
}