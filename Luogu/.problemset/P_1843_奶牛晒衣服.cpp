#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N = 5e5+5;
int n, a, b;
priority_queue<int, vector<int>, less<int> > q;
int ans;

signed main(){
	cin >> n >> a >> b;
	for(int i = 1; i <= n; i++){
		int num;
		cin >> num;
		q.push(num);
	}
	while(q.top() > a * ans){
		q.push(q.top() - b);
		q.pop();
		ans++;
	}
	cout << ans << endl; 
	
} 