#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

string s;
int n;

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> s;
    
    int cnt = 0;
    n = s.length();
    bool changed1 = 0, changed2 = 0;
    for(int i = 0; i < n - 1; i++){
        char c1[27] = {0};
        char c2[27] = {0};
        if(c2[i - 96] == 0){
            for(int j = i + 1; j < n; j++){
                if(s[i] != s[j] && c1[j - 96] == 0){
                    cnt++;
                    c1[s[j] - 96] = 1;
                    changed1 = 1;
                    changed2 = 1;
                }
            }
        }
        if(changed2){
            c2[i - 96] = 1;
            changed2 = 0;
        }
    }

    if(changed1) cout << cnt << endl;
    else cout << 1 << endl;
    return 0;
}