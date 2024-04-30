#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int n;
int x1, x2, y11, y2;
int a1 = 0, b1 = 0, a2 = 0, b2 = 0;

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> x1 >> y11 >> x2 >> y2;
        int xmin, ymin, xmax, ymax;
        xmin = min(x1, x2);
        ymin = min(y11, y2);
        xmax = max(x1, x2);
        ymax = max(y11, y2);
        a1 = min(a1, xmin);
        a2 = max(a2, xmax);
        b1 = max(b1, ymax);
        b2 = min(b2, ymin);
    }
    int ans = abs(a1 - a2) * abs(b1 - b2);
    cout << ans << endl;
    return 0;
}