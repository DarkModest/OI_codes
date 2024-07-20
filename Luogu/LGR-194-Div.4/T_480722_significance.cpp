#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int n;
int x[105];
int a[105][105];
int ans[105];

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ans[0] = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> x[i];
        for(int j = 1; j <= x[i]; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= x[i]; j++){
            ans[i] += x[a[i][j]] + 1;
        }
        cout << ans[i] << " ";
    }
    
    return 0;
}