#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool check(int x){
    string s = to_string(x);
    for(int l = 0, r = s.length() - 1; l < r; l++, r--){
        if(s[l] != s[r]){
            return false;
        }
    }
    return true;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    int ans = 0;
    for(int i = 1; i * i * i <= n; i++){
        if(check(i * i * i)) ans = max(ans, i * i * i);
    }
    cout << ans << endl;
    return 0;
}