#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int n;
string s;
int ans;
signed main(){
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> n >> s;
	for(int i = 0; i < n; i++){
		if(s[i] != '/') continue;
		int cnt = 0;
		while(1){
			int j = i - (cnt + 1);
			int k = i + (cnt + 1);
			if(s[j] != '1' || s[k] != '2' || !(0 <= j && j < n) || !(0 <= k && k < n))
				break;
			cnt++;
		}
		ans = max(ans, cnt * 2 + 1);
	}
	cout << ans << endl;
	return 0;
}