#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int t;
int n, m, k;

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> t;
    for(int ii = 1; ii <= t; ii++){
        vector<int> v;
        cin >> n >> m >> k;
        for(int i = n; i >= k; i--) cout << i << " ";
        for(int i = m + 1; i <= k - 1; i++) cout << i << " ";
        for(int i = 1; i <= m; i++) cout << i << " ";
        cout << endl;
    }
    return 0;
}