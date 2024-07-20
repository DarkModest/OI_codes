#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int x, y, z, w;

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> x >> y >> z >> w;
    if((x == 0 && z != 0) || (y == 0 && w != 0)) cout << -1 << endl;
    else if(x == 0 && z == 0){
        if(y == 0 && w == 0) cout << -1 << endl;
        else cout << y / w << endl;
    }
    else if(x / z == y / w) cout << x / z << endl;
    else cout << -1 << endl;
    return 0;
}