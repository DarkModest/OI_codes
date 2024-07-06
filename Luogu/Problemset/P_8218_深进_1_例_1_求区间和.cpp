#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    int a[100050];
    int m;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    cin >> m;
    for(int i = 1; i <= m; i++){
        int l, r;
        int ans = 0;
        cin >> l >> r;
        for(int j = l; j <= r; j++){
            ans += a[j];
        }
        cout << ans << endl;
    }
    return 0;
}