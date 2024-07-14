#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    int a[105];
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i < n; i++){
        cout << a[i] << " ";
        int l = a[i];
        int r = a[i + 1];
        while(l - r > 1){
            l -= 1;
            cout << l << " ";
        }
        while(r - l > 1){
            l += 1;
            cout << l << " ";
        }
    }
    cout << a[n] << endl;
    return 0;
}