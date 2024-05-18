#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    int a[205];
    cin >> n;
    int ans = 0;
    int cnt = 0;
    int cnt1 = 0;
    while(ans < n * n){
        cnt++;
        int a;
        cin >> a;
        ans += a;
        for(int i = 1; i <= a; i++){
            if(cnt % 2 == 1){
                cout << 0;
            } else {
                cout << 1;
            }
            cnt1++;
            if(cnt1 % n == 0) cout << endl;
        }
    }
    return 0;
}