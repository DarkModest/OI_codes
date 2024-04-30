#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, m;
    int z = 0, c = 0;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            z += min(i, j);
            c += i * j - min(i, j);
        }
    }
    cout << z << " " << c << endl;
    return 0;
}