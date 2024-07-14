#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt1 = 0, cnt2 = 0;
    bool ok = 0;
    for(auto i : s){
        if(i == 'T'){
            cnt1++;
            ok = 1;
        }
        else {
            cnt2++;
            ok = 0;
        }
    }
    if(cnt1 > cnt2) cout << "T" << endl;
    else if(cnt1 < cnt2) cout << "A" << endl;
    else {
        if(ok == 1) cout << "A" << endl;
        else cout << "T" << endl;
    }
    return 0;
}