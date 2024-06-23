#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    int a[205];
    int b[105] = {0};
    int ans = 0;
    cin >> n;
    for(int i = 1; i <= 2 * n; i++) cin >> a[i];
    for(int i = 1; i <= 2 * n - 2; i++){
        if(a[i] == a[i + 2]) b[a[i]]++;
    }
    for(int i = 1; i <= n; i++)
        if(b[i] > 0) ans++;
    cout << ans << endl;
    return 0;
}