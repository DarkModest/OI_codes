#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int cases;
    cin >> cases;
    for(int ii = 1; ii <= cases; ii++){
        string s, t;
        cin >> s >> t;
        int ptr = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == t[ptr] && ptr <= t.length() - 1)
                ptr++;
            else if(s[i] == '?'){
                if(ptr <= t.length() - 1){
                    s[i] = t[ptr];
                    ptr++;
                } else {
                    s[i] = 'a';
                }
            }
        }
        if(ptr == t.length()){
            cout << "YES" << endl;
            cout << s << endl;
        } else cout << "NO" << endl;
    }
    return 0;
}