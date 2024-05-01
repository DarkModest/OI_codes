#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string s, t;
    cin >> s >> t;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    bool f1 = 0, f2 = 0;
    s += 'X';
    for(auto i : s){
        if(f2 && i == t[2]){
            cout << "Yes" << endl;
            return 0;
        } else if(f1 && i == t[1]){
            f2 = 1;
        } else if(i == t[0]){
            f1 = 1;
        }
    }
    cout << "No" << endl;
    return 0;
}