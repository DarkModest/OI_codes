#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        int ans = 11;
        int maxn = max(x1, max(x2, x3));
        for(int i = 1; i <= 10; i++){
            ans = min(ans, abs(i - x1) + abs(i - x2) + abs(i - x3));
        }
        cout << ans << endl;
    }
    return 0;
}