#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int a[40005];
    int x;
    int cnt = 0;
    while(cin >> x){
        cnt++;
        a[cnt] = x;
    }
    cout << sqrt(cnt) << " ";
    
    return 0;
}