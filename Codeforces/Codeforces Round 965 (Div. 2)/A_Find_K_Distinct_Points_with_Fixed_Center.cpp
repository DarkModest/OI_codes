#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int x, y, c;

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int cases;
    cin >> cases;
    for(int ii = 1; ii <= cases; ii++){
        cin >> x >> y >> c;
        int a[1005], b[1005], suma[1005], sumb[1005];
        suma[0] = 0, sumb[0] = 0;
        for(int i = 1; i <= c - 1; i++){
            a[i] = i;
            b[i] = i;
            if(a[i] == x && b[i] == y) a[i]++;
            suma[i] = suma[i - 1] + a[i];
            sumb[i] = sumb[i - 1] + b[i];
            cout << a[i] << " " << b[i] << endl;
        }
        suma[c] = x * c - suma[c - 1];
        sumb[c] = y * c - sumb[c - 1];
        cout << suma[c] << " " << sumb[c] << endl;
    }
    return 0;
}