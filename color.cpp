#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e6+5;

int n, m;
int a[N] = {0}, b[N][5] = {0},
int cnt = 0;

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		int l, r, k;
		cin >> l >> r >> k;
		b[l][k] = 1;
		b[r + 1][k] = 1;
	}
	for(int i = 1; i <= n; i++){
        a[i] = a[i - 1] + b[i];
        cout << a[i] << " " << endl;
    } 
	cout << cnt << endl;
    return 0;
}
