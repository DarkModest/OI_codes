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
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        cnt += a[i];
        if(cnt >= 100) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}