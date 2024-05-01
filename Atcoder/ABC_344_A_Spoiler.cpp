#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string s;
    cin >> s;
    for(int i = 0; i <= s.length(); i++){
        if(s[i] == '|'){
            for(int j = i + 1; j <= s.length(); j++){
                if(s[j] == '|'){
                    s.erase(i, j - i + 1);
                }
            }
        }
    }

    cout << s << endl;
    return 0;
}