#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string s;
    cin >> s;
    int ans = 0;
    for(int l1 = 0; l1 < s.size(); l1++){
        if(s.substr(l1, 7) == "Genshin"){
            for(int l2 = l1; l1 < s.size(); l2++){
                if(s.substr(l2, 6) == "player")
                    ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}