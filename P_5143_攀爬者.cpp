#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 50005;

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    int x[N], y[N], z[N];
    double ans = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> x[i] >> y[i] >> z[i];

    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            if(z[i] > z[j]){
                swap(x[i], x[j]);
                swap(y[i], y[j]);
                swap(z[i], z[j]);
            }
        }
    }
    for(int i = 2; i <= n; i++)
        ans += sqrt( pow( x[i-1] - x[i], 2) + pow( y[i-1] - y[i], 2) + pow( z[i-1] - z[i], 2) );
    cout << fixed << setprecision(3) << ans << endl;
    return 0;
}