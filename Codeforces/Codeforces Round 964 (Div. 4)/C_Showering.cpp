#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int cases;
    cin >> cases;
    for(int ii = 1; ii <= cases; ii++){
        int n, s, m;
        cin >> n >> s >> m;
        int maxn = 0;
        int temp;
        cin >> temp;
        maxn = max(maxn, temp);
        int a, b;
        for(int i = 1; i <= n - 1; i++){
            cin >> a >> b;
            maxn = max(maxn, b - a);
        }
        cin >> temp;
        maxn = max(maxn, m - temp);
        
        if(maxn >= s) cout << "YES" << endl;
        else cout << "NO" << endl;
    }   
    return 0;
}