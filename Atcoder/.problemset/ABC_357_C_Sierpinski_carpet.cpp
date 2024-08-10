#include <bits/stdc++.h>
using namespace std;

char c[2005][2005];
int x;

void fill(int x, int y, int k){
    if(k == 0) return c[x][y] = 1, void();
    int t = k / 3;
    fill(x, y, t);
    fill(x + t, y, t);
    fill(x, y + t, t);
    fill(x + t * 2, y, t);
    fill(x, y + t * 2, t);
    fill(x + t * 2, y + t, t);
    fill(x + t, y + t * 2, t);
    fill(x + t * 2, y + t * 2, t);
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> x;
    if(x == 0) return cout << '#', 0;
    int t = pow(3, x);
    fill(1, 1, t);
    for(int i = 1; i <= t; i++){
        for(int j = 1; j <= t; j++){
            cout << (c[i][j] == 0 ? '.' : '#');
        }
        cout << endl;
    }
    return 0;
}