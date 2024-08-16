#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int cases;
    cin >> cases;
    for(int ii = 1; ii <= cases; ii++){
        int l, r, L, R;
        int ans = 0;
        int a[105] = {};
        cin >> l >> r >> L >> R;
        if((r <= L && l < L) || (R <= l && L < l))
            ans = 1;
        else if((l < L && R < r) || (L < l && r < R)){
            ans = min(R - L + 2, r - l + 2);
        } else if(l == L && r == R)
            ans = r - l;
        else if(l == L || r == R){
            ans = min(R - L + 1, r - l + 1);
        } else {
            if(r > L) ans = r - L + 2;
            else if(R > l) ans = R - l + 2;
        }
        cout << ans << endl;
    }
    return 0;
}