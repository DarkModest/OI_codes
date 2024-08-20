#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 15;
const int MOD = 1e8;
int m, n;
int dp[N][1 << N], xl[1 << N], fw[N], F[N][N];
int ans;
signed main(){
        ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> F[i][j];
            fw[i] = (fw[i] << 1) + F[i][j];
        }
    }
    for(int i = 0; i < (1 << m); i++)
        if((i & (i >> 1)) == 0) xl[i] = 1;
    dp[0][0] = 1;
    for(int i = 1; i <= n; i++)
        for(int j = 0; j < (1 << m); j++)
            if(xl[j] && ((j & fw[i]) == j))
                for(int k = 0; k < (1 << m); k++){
                    if(j & k) continue;
                    dp[i][j] = (dp[i][j] + dp[i - 1][k]) % MOD;
                }
    for(int i = 0; i < (1 << m); i++)
        ans = (ans + dp[n][i]) % MOD;
    cout << ans << endl;
    return 0;
}