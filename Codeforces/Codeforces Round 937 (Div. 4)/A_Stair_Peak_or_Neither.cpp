#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int a, b, c;
        cin >> a >> b >> c;
        if(a < b && b < c) cout << "STAIR" << endl;
        else if(a < b && b > c) cout << "PEAK" << endl;
        else cout << "NONE" << endl;
    }
    return 0;
}