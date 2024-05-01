#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    int a[1005]  = {0};
    int cnt = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a, a + n + 1);
    for(int i = 2; i <= n; i++){
        if(a[i] > a[1]){
            cnt += a[i] - a[1];
        }
    }
    cout << cnt << endl;
    return 0;
}