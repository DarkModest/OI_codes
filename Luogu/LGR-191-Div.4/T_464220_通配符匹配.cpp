#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string s, t;
    cin >> s >> t;
    for(int i = 0; i < s.length() - t.length() + 1; i++){
        if(s.substr(i, t.length()) == t) cout << i + 1 << " " << i + t.length();
        else {
            bool ok = true;
            string ss = s.substr(i, t.length());
            for(int j = 0; j < t.length(); j++){
                if(ss[j] != t[j] && !(ss[j] == '?' || t[j] == '?'))
                    ok = false;
            }
            if(ok) cout << i + 1 << " " << i + t.length() << endl;
        }
    }
    return 0;
}