#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 3e5+5;
int t, n, m, k;
int a[5];
int e[N], o[N], w[N];
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n >> m >> k;
        memset(o, 0x3f, sizeof(o)), memset(e, 0x3f, sizeof(e));
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= k; j++){
                cin >> a[j];
                if(a[j] & 1)
                    o[i] = min(o[i], a[j]), e[i] = min(e[i], -a[j]);
                else
                    o[i] = min(o[i], -a[j]), e[i] = min(e[i], a[j]);
            }
            w[i] = max(e[i], o[i]);
        }
        w[m + 1] = 0;
        for(int i = m; i >= 1; i--)
            w[i] = min(w[i] + w[i + 1], 0ll);
        if(n + w[1] <= 0){
            cout << -1 << endl;
            continue;
        }
        for(int i = 1; i <= m; i++){
            n += max(e[i], o[i]);
            if(e[i] >= o[i]) cout << "Even "; // L34: n += e[i]
            else if(n - o[i] + e[i] + w[i + 1] > 0) //L34: n += o[i] 先亏后赚
                cout << "Even ", n = n - o[i] + e[i];
            else cout << "Odd ";
            assert(n > 0);
        }
        cout << endl;
    }
    return 0;
}