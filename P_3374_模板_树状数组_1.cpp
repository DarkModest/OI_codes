#include<bits/stdc++.h>
using namespace std;
const int N = 5e5+5; 
int lowbit(int x){
	return -x & x;
}
int n, m;
int c[N];
int x, y, k;
int type;

int sum(int x){
	int ans = 0;
	for(int i = x; i; i -= lowbit(i))
		ans += c[i];
	return ans;
}

void add(int x, int y){
	for(int i = x; i <= n; i += lowbit(i))
		c[i] += y; 
}
int main(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		int num;
		cin >> num;
		add(i, num);
	}
	for(int i = 1; i <= m; i++){
		cin >> type >> x >> k;
		if(type == 1){
			add(x, k);
		}
		if(type == 2){
			cout << sum(k) - sum(x - 1) << endl;
		}
	}
	return 0;
}