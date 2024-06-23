#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int ans = 0;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        string s;
        cin >> s;
        if(s == "Takahashi") ans++;
    }
    cout << ans << endl;
    return 0;
}