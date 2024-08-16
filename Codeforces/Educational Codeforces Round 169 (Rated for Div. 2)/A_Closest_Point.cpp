#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int cases;
    cin >> cases;
    for(int ii = 1; ii <= cases; ii++){
        int n;
        int a[105];
        cin >> n;
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        if(n >= 3){
            cout << "NO" << endl;
        } else {
            if(a[2] - a[1] > 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}