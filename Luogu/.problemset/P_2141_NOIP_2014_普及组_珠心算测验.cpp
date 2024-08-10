#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int n;
int a[105];
int t[20005] = {}, g[20005];
int maxn = 0;
int cnt = 0;

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        g[a[i]] = 1;
    }
    
    for(int i = 1; i <= n - 1; i++){
        for(int j = i + 1; j <= n; j++){
            t[a[i] + a[j]]++;
            maxn = max(maxn, a[i] + a[j]);
        }
    }
    for(int i = 1; i <= maxn; i++){
        if(t[i] != 0 && g[i]) cnt++;
    }
    cout << cnt << endl;
    return 0;
}