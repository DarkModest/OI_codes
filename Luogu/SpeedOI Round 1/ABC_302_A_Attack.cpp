#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int a, b;
    cin >> a >> b;
    if(a / b * b >= a) cout << a / b << endl;
    else cout << a / b + 1 << endl;
}