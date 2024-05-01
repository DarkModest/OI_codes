#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int w, b;
    cin >> w >> b;

    string s;
    for(int i = 1; i <= 50; i++){
        s += "wbwbwwbwbwbw";
    }
    for(int i = 0; i <= 20; i++){
        string ss = s.substr(i, w + b);
        int cntw = 0, cntb = 0;
        for(int j = 0; j < w + b; j++){
            if(ss[j] == 'w') cntw++;
            if(ss[j] == 'b') cntb++;
        }
        if(cntw == w && cntb == b){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}