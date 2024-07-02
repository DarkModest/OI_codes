#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int a, b;
    cin >> a >> b;
    for(int i = 1; i <= a; i++){
        int n;
        cin >> n;
        b -= n;
        if(b < 0){
            cout << i - 1 << endl;
            return 0;
        }
    }
    cout << a << endl;
    return 0;
}