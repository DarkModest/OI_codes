#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string s;
    cin >> s;
    int ans;
    for(int i = 0; i <= s.length(); i++){
        if(s[i] != s[i + 1]){
            if(s[i + 1] == s[i + 2]){
                ans = i + 1;
                break;
            } else {
                ans = i + 2;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}