#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, k;
    int a[105];
    int b[105] = {0};
    int cnt = 1;
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(a[i] % k == 0){
            b[cnt] = a[i] / k;
            cnt++;
        }
    }
    sort(b, b + cnt);
    for(int i = 1; i < cnt; i++){
        cout << b[i] << " ";
    }
    return 0;
}