#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int n, m;
int a[1005][1005];
int ans = 0;

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> a[i][j];

    for(int i = 2; i <= n - 1; i += 3){
        for(int j = 2; j <= m - 1; j += 3){
            ans += a[i][j];
        }
    }
    cout << ans << endl;
    return 0;
}