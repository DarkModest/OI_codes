#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e6+5;
string s;
int cnt[30];

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> s;
    int l = s.length();
    for(int i = 0; i < l; i++){
        sum[s[i] - 'a'] ++;
        for(int j = 0; j < i; i++){
            if(s[i] != s[j]){
                sum[s[j] - 'a'] ++;
            }
        }
    }
    return 0;
}