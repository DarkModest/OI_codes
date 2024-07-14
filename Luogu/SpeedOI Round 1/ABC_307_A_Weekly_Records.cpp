#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    int a[105];
    int cnt = 0;
    cin >> n;
    for(int i = 1; i <= 7 * n; i++) cin >> a[i];
    for(int i = 1; i <= 7 * n; i++){
        if(i % 7 != 0) cnt += a[i];
        else{
            cnt += a[i];
            cout << cnt << " ";
            cnt = 0;
        }
    }
    return 0;
}