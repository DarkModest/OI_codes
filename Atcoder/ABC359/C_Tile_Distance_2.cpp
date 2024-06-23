#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int Sx, Sy, Tx, Ty;
    cin >> Sx >> Sy >> Tx >> Ty;

    if ((Sx + Sy) % 2 == 1) {
        --Sx;
    }
    if ((Tx + Ty) % 2 == 1) {
        --Tx;
    }

    int Dx = abs(Sx - Tx);
    int Dy = abs(Sy - Ty);
    
    cout << (Dy + max(Dx, Dy)) / 2 << endl;
    return 0;
}