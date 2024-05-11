#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, x, y, z;
    cin >> n >> x >> y >> z;
    if(x < y){
        if(x <= z && z <= y) cout << "Yes" << endl;
        else cout << "No" << endl; 
    } else {
        if(y <= z && z <= x) cout << "Yes" << endl;
        else cout << "No" << endl; 
    }
    return 0;
}