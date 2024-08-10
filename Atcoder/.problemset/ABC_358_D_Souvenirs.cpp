#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 2e5+5;
int m, n;
int a[N], b[N];
int ans = 0;
int cnt = 0;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= m; i++) cin >> b[i];
    sort(a + 1, a + n + 1);
    sort(b + 1, b + m + 1);
    for(int i = 1; i <= m; i++){
        int pos = upper_bound(a + 1 + cnt, a + n + 1, b[i] - 1) - a;
        if(pos > n){
            cout << -1;
            return 0;
        }
        cnt = pos;
        ans += a[pos];
    }
    cout << ans << endl;
    return 0;
}