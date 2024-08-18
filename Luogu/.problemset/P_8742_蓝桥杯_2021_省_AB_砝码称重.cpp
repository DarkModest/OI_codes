#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 100005;
int n;
int w[N];
int dp[105][N];
int maxn;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> w[i];
        maxn += w[i];
    }
    dp[0][0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = maxn; j >= 0; j--){
            dp[i][j] |= dp[i - 1][j];
            dp[i][j] |= dp[i - 1][abs(j - w[i])];
            if(j + w[i] <= maxn){
                dp[i][j] |= dp[i - 1][j + w[i]];
            }
        }
    }
    int ans = 0;
    for(int i = 1; i <= maxn; i++)
        ans += dp[n][i];
    cout << ans << endl;
    return 0;
}