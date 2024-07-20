#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int n;

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++){
        string s;
        int k;
        int p[1005];
        cin >> s >> k;
        for(int j = 1; j <= k; j++) cin >> p[j];

        int cnt = 0;
        p[0] = 0;
        p[k + 1] = s.length() + 1;
        for(int j = 0; j <= k; j++){
            string ss;
            ss = s.substr(p[j], p[j + 1] - p[j]);
            if(ss.find("respect", 0) != string::npos) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}