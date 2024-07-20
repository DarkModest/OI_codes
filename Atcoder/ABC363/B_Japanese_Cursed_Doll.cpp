#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, t, p;
    int a[105];
    cin >> n >> t >> p;
    for(int i = 1; i <= n; i++) cin >> a[i];

    sort(a + 1, a + n + 1);
    int pos = -1;
    bool ok = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] >= t){
            if(!ok){
                pos = i;
                ok = 1;
            }
            p--;
        }
    }
    int ans;
    if(pos == -1){
        ans = t - a[n - p + 1];
    } else
        ans = (p <= 0) ? 0 : (t - a[pos - p]);
    cout << ans << endl;
    return 0;
}

//n t p
//5 10 3
//1 2 3 6 11