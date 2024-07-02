//failed
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    for(int k = 1; k <= t; k++){
        int n, m;
        cin >> n >> m;
        int a[105][105];
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= m; j++)
                cin >> a[i][j];
        
            

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}