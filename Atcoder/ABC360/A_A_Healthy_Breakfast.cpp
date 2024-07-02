#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string s;
    cin >> s;
    if(s[0] == 'R'){
        if(s[1] == 'M' || s[2] == 'M') cout << "Yes" << endl;
        else cout << "No" << endl;
    } else if (s[1] == 'R'){
        if(s[2] == 'M') cout << "Yes" << endl;
        else cout << "No" << endl;
    } else cout << "No" << endl;
    return 0;
}