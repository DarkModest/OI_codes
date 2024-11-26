#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e5+5;
int a[N];
int f[N], h[N];
int n = 1;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    while(cin >> a[n]){
        n++;
    }
    n--;
    int cnt = 1;
    int cnt2 = 1;
    h[1] = f[1] = a[1];
    for(int i = 2; i <= n; i++){
        if(a[i] <= f[cnt]) f[++cnt] = a[i];
        else {
            int pos = upper_bound(f + 1, f + cnt + 1, a[i], greater<int>()) - f;
            f[pos] = a[i];
        }
        if(a[i] > h[cnt2]) h[++cnt2] = a[i];
        else {
            int pos = lower_bound(h + 1, h + cnt2 + 1, a[i]) - h;
            h[pos] = a[i];
        }
    }
    cout << cnt << endl << cnt2 << endl;
    return 0;
}