#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 2e5+5;
int n, k;

signed main(){
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> n >> k;
	vector<int> x(n);
	vector<int> y(n);
	for(int i = 0; i < n; i++){
		cin >> x[i];
		x[i]--;
	}
	iota(y.begin(), y.end(), 0);
	while(k > 0){
		if(k % 2 == 1){
			for(int i = 0; i < n; i++){
				y[i] = x[y[i]]; 
			}
		}
		
		vector<int> tmp(n);
		for(int i = 0; i < n; i++){
			tmp[i] = x[x[i]];
		}
		x = move(tmp);
		k /= 2;
	}
	vector<int> a(n);
	vector<int> b(n); 
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		b[i] = a[y[i]];
		cout << b[i] << " \n"[i == N - 1];
	}
	return 0;
}
