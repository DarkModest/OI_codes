#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int a[10];
    for(int i = 1; i <= 8; i++) cin >> a[i];
    bool ok = true;
    for(int i = 2; i <= 8; i++){
        if(a[i] < a[i - 1]) ok = 0;
    }
    for(int i = 1; i <= 8; i++){
        if(a[i] % 25 != 0) ok = 0;
        if(!(100 <= a[i] && a[i] <= 675)) ok = 0;
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}