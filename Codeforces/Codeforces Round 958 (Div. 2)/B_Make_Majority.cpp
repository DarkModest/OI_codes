#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int cases;
    cin >> cases;
    for(int ii = 1; ii <= cases; ii++){
        int n;
        string s;
        int c1 = 0, c0 = 0;
        cin >> n >> s;
        for (int i = 0; i < n; ++ i) {
            if (s[i] == '1') ++ c1;
            if (s[i] == '0' && (i == 0 || s[i - 1] != '0')) ++ c0;
        }
        cout << ((c1 > c0) ? "Yes" : "No") << endl;
    }
    return 0;
}