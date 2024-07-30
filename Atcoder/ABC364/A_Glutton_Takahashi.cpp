#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    string a, b;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a;
        if(b == a && a == "sweet" && i != n){
            cout << "No" << endl;
            return 0;
        } else {
            b = a;
        }
        //cout << b << endl;
    }
    cout << "Yes" << endl;
    return 0;
}