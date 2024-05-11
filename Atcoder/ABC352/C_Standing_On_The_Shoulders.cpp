#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 2e5+5;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    int a[N], b[N], c[N], d[N];
    d[0] = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i] >> b[i];
        c[i] = b[i] - a[i];
    }
    sort(c + 1, c + n + 1);
    for(int i = 1; i <= n; i++){
        d[i] = d[i - 1] + a[i];
    }
    cout << d[n] + c[n];
    return 0;
}