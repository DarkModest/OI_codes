#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
//骗20分
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    int a[2005][2005];
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];
    int ans = 0;
    for(int i = 1; i <= n; i++){
        ans += a[n][i];
    }
    cout << ans << endl;
    return 0;
}