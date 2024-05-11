#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, k;
    int a[105];
    int cnt = 0;
    int z = 0;
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    a[n + 1] = 0;
    for(int i = 1; i <= n + 1; i++){
        if(a[i] == 0) cnt++;
        if(k - z < a[i]){
            z = a[i];
            cnt++;
        } else if(k - z >= a[i]){
            z += a[i];
        }
    }
    cout << cnt << endl;
    return 0;
}