#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

const int MOD = 1e8;
int n;
const int N = 3e5+5;
int a[N], b[N];
int ans = 0;
int cnt = 0;
b[0] = 0;

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    for(int i = 1; i <= n; i++){
        b[i] = b[i - 1] + a[i];
    }
    
    cout << ans - cnt * MOD << endl;
    return 0;
}