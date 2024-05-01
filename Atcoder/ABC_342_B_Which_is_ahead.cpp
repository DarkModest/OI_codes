#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    int p[105];
    int q;
    int a, b;

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> p[i];
    }
    cin >> q;
    for(int i = 1; i <= q; i++){
        cin >> a >> b;
        if(find(p, p + n, a) < find(p, p + n, b)){
            cout << a << endl;
        } else {
            cout << b << endl;
        }
    }
    return 0;
}