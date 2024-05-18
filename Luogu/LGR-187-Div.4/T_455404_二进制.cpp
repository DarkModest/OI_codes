#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int a;
    cin >> a;
    while(1){
        cout << a / 2 << " " << a % 2 << endl;
        if(a == 1 || a == 0) break;
        a = a / 2;
    }
    return 0;
}