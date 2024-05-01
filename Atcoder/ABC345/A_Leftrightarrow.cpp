#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string s;
    cin >> s;
    bool bas = 1;
    if(s[0] != '<' || s[s.length() - 1] != '>') bas = 0;
    for(int i = 1; i <= s.length() - 2; i++){
        if(s[i] != '=') bas = 0;
    }
    if(bas) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}