#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int r, g, b;
    cin >> r >> g >> b;
    string c;
    cin >> c;
    int ans;
    if(c == "Red") ans = min(b, g);
    if(c == "Blue") ans = min(r, g);
    if(c == "Green") ans = min(r, b);
    cout << ans << endl;
    return 0;
}