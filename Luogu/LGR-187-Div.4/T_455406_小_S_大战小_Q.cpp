#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e6 + 5;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    int a[N], b[N];
    int s = 0, q = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++){
        cin >> b[i];
    }

    for(int i = 1; i <= n; i++){
        if(a[i] > b[i]) s++;
        else if(a[i] < b[i]) q++;
    }
    cout << s << " " << q << endl;
    if(s > q) cout << "S" << endl;
    else if(s < q) cout << "Q" << endl;
    else cout << "Tie" << endl;
    return 0;
}