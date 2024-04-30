#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int n, m;
int chess[2005][2005], d[2005][2005];

void diff(int x1, int y1, int x2, int y2){
    d[x1][y1] += 1;
    d[x1][y1 + 1] -= 1;
    d[x2 + 1][y1] -= 1;
    d[x2][y2 + 1] += 1;
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        diff(a, b, c, d);
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            d[i][j] = d[i - 1][j] + d[i][j - 1] - d[i - 1][j - 1] + d[i][j];
            if(d[i][j] % 2 == 0) cout << 1;
            else cout << 0;
        }
        cout << endl;
    }
    return 0;
}