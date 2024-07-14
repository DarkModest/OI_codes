#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int a1, a2;
    int b1, b2;
    int c1, c2;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
    double ab = pow((a1 - b1), 2) + pow((a2 - b2), 2);
    double bc = pow((c1 - b1), 2) + pow((c2 - b2), 2);
    double ac = pow((a1 - c1), 2) + pow((a2 - c2), 2);
    if(ab + bc == ac || ab + ac == bc || bc + ac == ab) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}