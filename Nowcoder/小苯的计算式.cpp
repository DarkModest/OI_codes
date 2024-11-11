#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int C, n;
int ans;
string s1, s2;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n >> C;
    string s = to_string(C);
    for(int i = 0; i <= C; i++){
        int j = C - i;
        s1 = to_string(i), s2 = to_string(j);
        if(s1.length() + s2.length() + s.length() + 2 == n){
            ans++;
            //cout << s1 << "+" << s2 << "=" << s << endl;
        }
    }
    cout << ans << endl;
    return 0;
}