#include <bits/stdc++.h>
using namespace std;
//#define int long long
const int N = 1e6 + 5;

int n, m, l, q;
int a[105] = {0}, b[105] = {0}, c[105] = {0};
int x;
signed main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	cin >> m;
	for(int i = 1; i <= m; i++){
		cin >> b[i];
	}
	cin >> l;
	for(int i = 1; i <= l; i++){
		cin >> c[i];
	}

    int ans[N] = {0}, cnt = 1;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            for(int k = 1; k <= l; k++)
                ans[cnt++] = a[i] + b[j] + c[k];
	--cnt;
    sort(ans + 1, ans + cnt + 1);

    cin >> q;
	for(int i = 1; i <= q; i++){
		cin >> x;
        int pos = lower_bound(ans + 1, ans + cnt + 1, x) - ans;
        if(x == ans[pos]) cout << "Yes" << endl;
        else cout << "No" << endl;
	}

	return 0;
}