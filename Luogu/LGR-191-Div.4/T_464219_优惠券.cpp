#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    int a[1005], b[1005];
    cin >> n;
    b[0] = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        b[i] = b[i - 1] + a[i];
    }

    for(int i = 1; i <= n; i++){
        if(b[n] - b[i] <= i){
            cout << b[i] << endl;
            return 0;
        }
    }
    return 0;
}