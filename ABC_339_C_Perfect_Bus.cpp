#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 2e5 + 5;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    int a[N], b[N];
    b[0] = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        b[i] = b[i - 1] + a[i];
    }
    int maxn = b[n];
    sort(b + 1, b + n + 1);
    cout << abs(b[1]) + maxn << endl;
    return 0;
}