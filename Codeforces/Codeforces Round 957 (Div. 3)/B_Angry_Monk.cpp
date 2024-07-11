#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int t;
int n, k;


signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> t;
    for(int i = 1; i <= t; i++){
        int cnt = 0;
        int maxn = 0;
        vector<int> v;
        cin >> n >> k;
        for(int j = 1; j <= k; j++){
            int num;
            cin >> num;
            v.push_back(num);
            maxn = max(maxn, num);
        }

        bool ok = false;
        for(auto j : v){
            if(j >= 2){
                cnt += 2 * j - 1;
            } else {
                cnt++;
            }
            if(j == maxn && !ok){
                ok = true;
                cnt -= 2 * j - 1;
            }
        }
        
            
        cout << cnt << endl;
    }
    return 0;
}