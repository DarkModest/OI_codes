#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const float Pi = 3.14159;

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int r;
    cin >> r;
    double c = 2 * Pi * r;
    float s = Pi * r * r;
    cout << setprecision(7) << c << " " << s << endl;
    return 0;
}