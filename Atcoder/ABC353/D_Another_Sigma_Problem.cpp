#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

const int N = 2e5+5;
const int MOD = 998244353;
int n;
int a[N], b[N], c[15];
int ans = 0;

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        string s = to_string(a[i]);
        b[i] = s.size();
        c[s.size()]++;
    }

    for(int i = 1; i <= n; i++){
        c[b[i]]--;
        for(int z = 1; z <= 10; z++){
            ans += ((a[i] * ((long long)pow(10, z) %MOD) %MOD) *c[z]) %MOD;
            ans %= MOD;
        }
        ans += (a[i] * (i - 1)) % MOD;
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}