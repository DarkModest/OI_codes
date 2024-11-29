#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 3e5+5;
int a[N][3];
int n, m;
int ans[N];
int cnt[N];
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    memset(ans, -1, sizeof(ans));
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        cin >> a[i][1] >> a[i][2];
        cnt[a[i][1]]++, cnt[a[i][2]]++;
    }
    int uplim = min(1000000ll, m);
    for(int i = 1; i <= m; i++){
        if(cnt[a[i][1]] + cnt[a[i][2]] > m){
            ans[i] = 0;
            continue;
        }
        for(int j = 1; j <= uplim; j++){
            if(i == j) continue;
            if(a[i][1] != a[j][1] && a[i][2] != a[j][2] && a[i][1] != a[j][2] && a[i][2] != a[j][1]){
                ans[i] = j;
                break;
            }
        }
    }
    for(int i = 1; i <= m; i++) cout << ans[i] << " ";
    return 0;
}