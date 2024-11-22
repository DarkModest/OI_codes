#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

string s;
bool flag = true;
int c[500];
signed main(){
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> s;
	int n = s.length();
	if(n % 2) flag = false;
	for(int i = 0; i < n; i++){
		c[s[i]]++;
	}
	for(int i = 'a'; i <= 'z'; i++){
		if(c[i] != 0 && c[i] != 2) flag = false;
	}
	for(int i = 0; i < n; i += 2){
		if(s[i] != s[i + 1]) flag = false;
	}
	cout << (flag ? "Yes" : "No") << endl;
	return 0;
}