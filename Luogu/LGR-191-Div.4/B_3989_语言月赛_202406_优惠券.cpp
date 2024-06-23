#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    int a[1005], b[1005];
    int sum = 0;
    int ans = 500000;
    b[0] = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        b[i] = b[i - 1] + a[i];
    }
    for(int i = 1; i <= n; i++){
        int u = min(i, b[n] - b[i]);
        ans = min(b[n] - u, ans);
    }
    cout << ans << endl;
    return 0;
}