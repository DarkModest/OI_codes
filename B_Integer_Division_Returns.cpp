#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int x;
    cin >> x;
    if(x > 0){
        cout << (x - 1) / 10 + 1 << endl;
    } else {
        cout << x / 10 << endl;
    }
    return 0;
}