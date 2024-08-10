#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 30+3, K = 50+3;
const int INF = 1e9;
int n, m, k;
int dp[N][N][K];

void fill_dp(){
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            for(int l = 0; l < K; l++){
                if(l > i * j){
                    dp[i][j][l] = INF;
                    continue;
                } else if(l == i * j || l == 0){
                    dp[i][j][l] = 0;
                    continue;
                }

                dp[i][j][l] = INF;
                for(int i1 = 1; i1 <= i; i1++)
                    for(int l1 = 0; l1 <= l; l1++){
                        int i2 = i - i1, l2 = l - l1;
                        dp[i][j][l] = min(dp[i][j][l], dp[i1][j][l1] + dp[i2][j][l2] + j * j);
                    }
                for(int j1 = 1; j1 <= j; j1++)
                    for(int l1 = 0; l1 <= l; l1++){
                        int j2 = j - j1, l2 = l - l1;
                        dp[i][j][l] = min(dp[i][j][l], dp[i][j1][l1] + dp[i][j2][l2] + i * i);
                    }
            }
}


signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    fill_dp();

    int cases;
    cin >> cases;
    for(int ii = 1; ii <= cases; ii++){
        cin >> n >> m >> k;
        cout << dp[n][m][k] << endl;
    }
    return 0;
}