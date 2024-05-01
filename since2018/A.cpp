#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, x, y;
    cin >> n >> x >> y;
    cout << abs(n * x - n * y) << endl;
    return 0;
}