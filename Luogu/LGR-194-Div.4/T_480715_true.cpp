#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int a, b;
    cin >> a >> b;
    cout << a / 10 << " " <<  b * 10 << " " << 10000 - a / 10 - b * 10 << endl;
    return 0;
}