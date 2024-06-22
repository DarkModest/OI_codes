#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int x, y;
    cin >> x >> y;
    if((y - x) % 2 == 0){
        cout << (y - x) / 2 << endl;
    } else {
        cout << (y - x) / 2 + 1 << endl;
    }
    return 0;
}