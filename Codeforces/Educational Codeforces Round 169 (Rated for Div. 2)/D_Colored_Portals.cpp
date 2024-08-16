#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int cases;
    cin >> cases;
    for(int ii = 1; ii <= cases; ii++){
        int n, q;
        int a[N][5];
        cin >> n >> q;
        for(int i = 1; i <= n; i++){
            string s;
            cin >> s;
            for(auto j : s){
                if(j == 'B') a[i][1] = 1;
                if(j == 'G') a[i][2] = 1;
                if(j == 'R') a[i][3] = 1;
                if(j == 'Y') a[i][4] = 1;
            }
        }
        cin >> q;
        for(int i = 1; i <= q; i++){
            int x, y;
            cin >> x >> y;
        }
    }
    return 0;
}