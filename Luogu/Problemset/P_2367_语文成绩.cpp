#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 5e6+5;
int n, p;
int a[N], b[N];
int minn = 1e9;

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    a[0] = 0;
    cin >> n >> p;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        b[i] = a[i] - a[i - 1];
    }
    for(int i = 1; i <= p; i++){
        int x, y, z;
        cin >> x >> y >> z;
        b[x] += z;
        b[y + 1] -= z;
    }
    for(int i = 1; i <= n; i++){
        a[i] = a[i - 1] + b[i];
        minn = min(minn, a[i]);
    }
    cout << minn << endl;
    return 0;
}