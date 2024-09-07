#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int n;
int a[200005];
int d[200005];
int combo;
int ans;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        d[i] = a[i] - a[i - 1];
        //cout << d[i] << ' ';
    }
    cout << endl;
    for(int i = 1; i <= n; i++){
        if(d[i - 1] == d[i])
            combo++;
        else if(i > 1)
            combo = 2;
        else
            combo = 1;
        ans += combo;
        //cout << ans << endl;
    }
    cout << ans << endl;
    return 0;
}