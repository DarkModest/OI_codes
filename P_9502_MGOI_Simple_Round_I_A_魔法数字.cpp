#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    for(int i = -2; ; i += 2){
        if(pow(2, i) >= n){
            cout << i - 2 << endl;
            break;
        }
    }
    return 0;
}