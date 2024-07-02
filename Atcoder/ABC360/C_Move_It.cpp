#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int n;
int a[100005];
int ans = 0;
int sum[100005] = {};
int maxn[100005] = {};

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++){
        int w;
        cin >> w;
        sum[a[i]] += w;
        maxn[a[i]] = max(maxn[a[i]], w);
    }
    for(int i = 1; i <= n; i++){
        if(sum[i] != maxn[i])ans += sum[i] - maxn[i];
    }
    cout << ans << endl;
    return 0;
}