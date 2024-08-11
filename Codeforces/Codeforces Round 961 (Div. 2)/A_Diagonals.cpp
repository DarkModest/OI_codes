#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int cases;
    cin >> cases;
    for(int ii = 1; ii <= cases; ii++){
        int n, k;
        cin >> n >> k;
        vector<int> v;
        int maxn = 0;
        for(int i = n; i >= 1; i--){
            maxn += 2 * i;
            if(i == n){
                maxn -= n;
            } else {
                v.push_back(maxn - i);
            }
            v.push_back(maxn);
        }
        //for(auto i : v) cout << i << " ";
        //cout << endl;
        int pos = lower_bound(v.begin(), v.end(), k) - v.begin();
        if(k != 0) pos ++;
        cout << pos << endl;
    }
    return 0;
}