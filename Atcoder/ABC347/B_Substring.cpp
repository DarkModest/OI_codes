#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string s;
    string s1[10005];
    int cnt = 1;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        for(int j = 1; j <= s.length() - i; j++){
            bool flag = 0;
            for(int k = 1; k <= cnt; k++){
                if(s.substr(i, j) == s1[k]){
                    flag = 1;
                }
            }
            if(!flag){
                s1[cnt] = s.substr(i, j);
                cnt++;
            }
        }
    }
    cout << cnt - 1 << endl;
    return 0;
}