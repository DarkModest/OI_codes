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
        int a[55] = {};
        cin >> n;
        for(int i = 1; i <= n; i++){
            int num;
            cin >> num;
            a[num]++;
        }
        bool ok = 0;
        for(int i = 1; i <= n; i++){
            if(a[i] % 2 == 1){
                cout << "Yes" << endl;
                ok = 1;
                break;
            }
        }
        if(!ok) cout << "No" << endl;
    }
    return 0;
}