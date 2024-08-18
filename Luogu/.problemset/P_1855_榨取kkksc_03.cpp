#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 205;
int n, m, t;
int M[N], T[N];
int dp[N][N];
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n >> m >> t;
    for(int i = 1; i <= n; i++)
        cin >> M[i] >> T[i];
    for(int i = 1; i <= n; i++){
        for(int j = m; j >= M[i]; j--){
            for(int k = t; k >= T[i]; k--){
                dp[j][k] = max(dp[j][k], dp[j - M[i]][k - T[i]] + 1);
            }
        }
    }
    cout << dp[m][t] << endl;
    return 0;
}