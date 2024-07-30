#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e5+5;
int n, q;
int a[N], b, k;

int solve(int pos, int k){
    int l = 0, r = 1e8, ans = r;
    while(l <= r){
        int mid = (l + r) >> 1;
        int cnt = upper_bound(a + 1, a + n + 1, pos + mid) - lower_bound(a + 1, a + n + 1, pos - mid);
        if(cnt >= k){
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n >> q;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    for(int i = 1; i <= q; i++){
        cin >> b >> k;
        cout << solve(b, k) << endl;
    }
    return 0;
}