#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string s, t;
    cin >> s >> t;
    int cnt = 0;
    for(int i = 0; i < t.length(); i++){
        if(t[i] == s[cnt]){
            cnt++;
            cout << i + 1 << " ";
        }
    }
    return 0;
}