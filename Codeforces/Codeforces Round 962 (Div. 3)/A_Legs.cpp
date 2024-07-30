#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int n;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int cases;
    cin >> cases;
    for(int ii = 1; ii <= cases; ii++){
        
        cin >> n;
        if(n == 2 || n == 4)
            cout << 1 << endl;
        else if(n % 4 == 0)
            cout << n / 4 << endl;
        else cout << n / 4 + 1 << endl;
        
    }
    return 0;
}