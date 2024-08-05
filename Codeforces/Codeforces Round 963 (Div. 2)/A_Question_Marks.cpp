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
        int cnta = 0, cntb = 0, cntc = 0, cntd = 0;
        int ans = 0;
        string s;
        cin >> n >> s;
        for(auto i : s){
            if(i == 'A') cnta++;
            else if(i == 'B') cntb++;
            else if(i == 'C') cntc++;
            else if(i == 'D') cntd++;
        }
        ans += min(n, cnta);
        ans += min(n, cntb);
        ans += min(n, cntc);
        ans += min(n, cntd);
        cout << ans << endl;
    }
    return 0;
}