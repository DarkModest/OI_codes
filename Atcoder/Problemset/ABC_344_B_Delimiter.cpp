#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int a[105];
    int cnt = 0;
    for(int i = 1; ; i++){
        cin >> a[i];
        cnt ++;
        if(a[i] == 0) break;
    }
    for(int i = cnt; i >= 1; i--){
        cout << a[i] << endl;
    }
    return 0;
}