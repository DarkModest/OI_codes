#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, q;
    cin >> n >> q;
    int cnt = n;
    int t[1005] = {0};
    for(int i = 1; i <= q; i++){
        int a;
        cin >> a;
        if(t[a] == 1)t[a] = 0;
        else if(t[a] == 0)t[a] = 1;
    }
    for(int i = 1; i <= n; i++){
        if(t[i] == 1) cnt--;
    }
    cout << cnt << endl;

    return 0;
}