#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 2e5+5;

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    int a[N];
    int x[N], y[N], z[N];
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] == i) continue;
        int pos = find(a + 1, a + n + 1, i) - a;
        if(z[i] == 0){
            x[i] = min(i, pos);
            y[i] = max(i, pos);
            z[i] = 1; z[pos] = 1;
            cnt++;
        }
        
    }
    cout << cnt << endl;
    for(int i = 1; i <= n; i++){
        if(x[i] != 0 && y[i] != 0) cout << x[i] << " " << y[i] << endl;
    }
    return 0;
}