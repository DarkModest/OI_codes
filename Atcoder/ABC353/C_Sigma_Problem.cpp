#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

const int MOD = 1e8;
const int N = 3e5+5;
int n;
int a[N];
int ans = 0;
int cnt = 0;


signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    a[n + 1] = 1e8;

    sort(a + 1, a + n + 1);
    for(int i = 1; i <= n; i++){
        ans += a[i];
        int pos = lower_bound(a + i + 1, a + n + 2, MOD - a[i]) - a - 1;
        cnt += n - pos;
    }
    ans *= n - 1;
    cout << ans - cnt * MOD << endl;
    return 0;
}