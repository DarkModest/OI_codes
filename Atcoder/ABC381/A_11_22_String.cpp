#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
	ios::sync_with_stdio(false); cin.tie(0);
	int n;
	string s;
	cin >> n >> s;
	bool flag = true;
	if(n % 2 == 0) flag = false;
	for(int i = 0; i < n; i++){
		if(i <= (n + 1) / 2 - 1 - 1){
			if(s[i] != '1') flag = false;
		} else if(i >= (n + 1) / 2){
			if(s[i] != '2') flag = false;
		} else {
			if(s[i] != '/') flag = false;
		}
	}
	cout << (flag ? "Yes" : "No") << endl;
	return 0;
}
