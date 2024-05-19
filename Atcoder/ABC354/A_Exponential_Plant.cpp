#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    int p = 0;
    for(int i = 0; i <= n; i++){
        p += pow(2, i);
        if(p > n){
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}