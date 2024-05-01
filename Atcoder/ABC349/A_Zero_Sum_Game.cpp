#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    int ans = 0;
    cin >> n;
    for(int i = 1; i < n; i++){
        int a;
        cin >> a;
        ans += a;
    }
    cout << -ans << endl;
    return 0;
}