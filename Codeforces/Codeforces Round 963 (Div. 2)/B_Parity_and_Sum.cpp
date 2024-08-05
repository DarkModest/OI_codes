#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int cases;
    cin >> cases;
    for(int ii = 1; ii <= cases; ii++){
        int n;
        vector<int> v;
        int maxj = 0, maxo = 0;
        int ans = 0;
        cin >> n;
        for(int i = 1; i <= n; i++){
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end());

        int jo = v[0] % 2;
        int ok = 1;
        for(auto i : v){
            if(i % 2)
                maxj = max(maxj, i);
            else
                maxo = max(maxo, i);
            if(jo != i % 2) ok = 0;
            //cout << i << " ";
        }
        //cout << endl;
        if(ok){
            cout << 0 << endl;
            continue;
        }
        for(auto i : v){
            if(i % 2 == 0){
                if(i < maxj){
                    ans++;
                    maxj += i;
                } else {
                    while(i >= maxj){
                        maxj += maxo;
                        ans++;
                    }
                    ans++;
                }
            }
            //cout << ans << " ";
        }
        cout << ans << endl;
    }
    return 0;
}
/*
j + j = o
o + o = o
j + o = j
1 1 2 3 4 6
1 1 2 2 3 6
*/