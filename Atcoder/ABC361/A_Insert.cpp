#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, k, x;
    int a[105];
    cin >> n >> k >> x;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= k; i++) cout << a[i] << " ";
    cout << x << " ";
    for(int i = k + 1; i <= n; i++) cout << a[i] << " ";
    return 0;
}