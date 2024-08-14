#include<bits/stdc++.h>
using namespace std;
const int N = 5e5+5; 
int lowbit(int x){
	return -x & x;
}
int n, m;
int a[N], c[N], d[N];
int x, y, k;
int type;

int sum(int x){
	int ans = 0;
	for(int i = x; i; i -= lowbit(i))
		ans += c[i];
	return ans;
}

void add(int x, int y){
	for(int i = x; i <= n; i += lowbit(i)){
		c[i] += y;
	}
}
int main(){ 
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		d[i] = a[i] - a[i - 1];
		add(i, d[i]);
	}
	for(int i = 1; i <= m; i++){
		cin >> type;
		if(type == 1){
			cin >> x >> y >> k;
			add(x, k);
			add(y + 1, -k);
		}
		if(type == 2){
			cin >> x;
			cout << sum(x) << endl;
		}
	}
	return 0;
}