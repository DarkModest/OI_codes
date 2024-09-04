#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int INF = 1e18;
int n;
int a[200005];
int dp[200005][2];
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    dp[0][1] = -INF;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++){
        dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] + a[i]);
        dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] + 2 * a[i]);
        //cout << max(dp[i][1], dp[i][0]) << endl;
    }
    cout << max(dp[n][1], dp[n][0]) << endl;
    return 0;
}