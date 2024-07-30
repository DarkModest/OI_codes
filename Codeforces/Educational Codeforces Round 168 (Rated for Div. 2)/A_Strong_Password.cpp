#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int cases;
    cin >> cases;
    for(int ii = 1; ii <= cases; ii++){
        string s;
        cin >> s;
        int len = s.length();
        if(len >= 2){
            bool ok = 0;
            for(int i = 1; i < len; i++){
                if(s[i - 1] == s[i]){
                    string s2;
                    if(s[i] == 'z')
                        s2 = 'y';
                    else 
                        s2 = s[i] + 1;
                    s.insert(i, s2);
                    ok = 1;
                    break;
                }
            }
            if(!ok){
                if(s[len - 1] == 'z')
                    s += 'y';
                else
                    s += s[len - 1] + 1;
            }
        } else {
            if(s == "z")
                s += 'y';
            else 
                s += s[0] + 1;
        }
        cout << s << endl;
    }
    return 0;
}