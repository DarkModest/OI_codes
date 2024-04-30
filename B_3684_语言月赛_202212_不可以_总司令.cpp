#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int x, y;
    cin >> x >> y;
    if(x > y) cout << "No" << endl;
    if(x < y) cout << "Yes" << endl;
    if(x == y) cout << "equal probability" << endl;
    return 0;
}