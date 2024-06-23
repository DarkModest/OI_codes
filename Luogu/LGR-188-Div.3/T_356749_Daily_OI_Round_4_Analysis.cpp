#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string s;
    cin >> s;
    int ans = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] <= '9'){
            ans += 'A' - s[i];
        } else if(s[i] >= 'a'){
            ans += s[i] - 'Z';
        }
    }
    cout << ans << endl;
    return 0;
}