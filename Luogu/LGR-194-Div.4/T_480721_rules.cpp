#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int n, m, k;
int r[1005][1005];
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n >> m >> k;
    int cnts = 0;
    for(int i = 1; i <= m; i++){ //day
        int cnt = 0;
        for(int j = 1; j <= n; j++){ //ren
            cin >> r[i][j];
            if(r[i][j] == k) cnt++;
        }
        if(cnt * 2 >= n) cnts++;
    }
    if(cnts * 2 >= m) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}