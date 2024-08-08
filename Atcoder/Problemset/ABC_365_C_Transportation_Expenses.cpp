#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 2e5+5;
int n, m;
int a[N], b[N];

bool check(int x){
    int sum = 0;
    for(int i = 1; i <= n; i++)
        sum += min(x, a[i]);
    return sum <= m;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    b[0] = 0;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    for(int i = 1; i <= n; i++)
        b[i] = b[i - 1] + a[i];
    if(b[n] <= m)
        cout << "infinite" << endl;
    else {
        int l = 0, r = 1e9, ans = 0;
        while(l <= r){
            int mid = (l + r) / 2;
            if(check(mid)){
                l = mid + 1;
                ans = mid;
            } else 
                r = mid - 1;
        }
        cout << ans << endl;
    }
    return 0;
}
// 1 2 2 2 5 5 6 7 7 9