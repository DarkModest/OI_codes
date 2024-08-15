#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 5e4+5;
int L, n, m;
int d[N];
bool check(int x){
	int now = 0;
	int stone = 0;
	for(int i = 1; i <= n + 1; i++){
		if(d[i] - now < x)
			stone++;
		else
			now = d[i];
	}
	return stone <= m;
}
signed main(){
	
	cin >> L >> n >> m;
	for(int i = 1; i <= n; i++)
		cin >> d[i];
	d[n + 1] = L;
	int l = 1; int r = L;
	while(l < r){
		int mid = (l + r + 1) >> 1;
		if(check(mid)){
			l = mid;
		} else
			r = mid - 1;
	}
	cout << r << endl;
	return 0;
}