#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 2e5+5;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, t;
    int h[5000] = {}, s[5000] = {};
    int l = 0, r = 0;
    int x, y;
    cin >> n >> t;
    for(int i = 1; i <= t; i++){
        int a;
        cin >> a;
        if(a % n != 0){
            x = a % n;
            y = a / n + 1;
        } else {
            x = n;
            y = a / n;
        }
        //cout << x << " " << y << endl;
        h[y]++;
        s[x]++;
        if(n % 2){
            if(x == y) l++;
            if(x + y == n + 1) r++;
        }
        //cout << h[y] << " " << s[x] << " " << l << " " << r << endl;
        if(h[y] == n || s[x] == n || l == n || r == n){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}