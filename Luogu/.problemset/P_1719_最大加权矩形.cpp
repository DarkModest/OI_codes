#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int n;
int a[125][125];
int sum[125][125];
int maxn = 0;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 1, j = 1; i <= n, j <= n; i++, j++)
        cin >> a[i][j];

    for(int i = 1, j = 1; i <= n, j <= n; i++, j++){
        for(int a1 = 1, b1 = 1; a1 <= n, b1 <= n; a1++, b1++){
            for(int a2 = a1, b2 = a2; a2 <= n, b2 <= n; a2++, b2++){
                sum[i][j] = sum[a2][b2] - sum[a1 - 1][b2] - sum[a2][b1 - 1] + sum[a1 - 1][b1 - 1];
            }
        }
    }
    for(int i = 1, j = 1; i <= n, j <= n; i++, j++)
        maxn = max(maxn, sum[i][j]);
    cout << maxn << endl;
    return 0;
}