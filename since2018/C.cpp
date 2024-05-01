#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    string s;
    double cnt = 0;
    cin >> n >> s;
    for(int i = 0; i <= n - 1; i++){
        if(s[i] == 'o') cnt ++;
        if(s[i] == '~') cnt += 0.5;
    }
    cout << cnt << endl;
    return 0;
}