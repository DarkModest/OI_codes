#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, a, b;
    cin >> n >> a >> b;
    for(int i = 1; i <= n; i++){
        int c;
        cin >> c;
        if(c == a + b) cout << i << endl;
    }
    return 0;
}