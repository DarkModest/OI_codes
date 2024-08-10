#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, t, a;
    cin >> n >> t >> a;
    int x = n / 2;
    if(t > x || a > x) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}