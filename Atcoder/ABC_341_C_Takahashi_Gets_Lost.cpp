#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int h, w, n;
    char m[505];
    char a[505][505];
    int cnt = 0;

    cin >> h >> w >> n;
    for(int i = 1; i <= n; i++)
        cin >> m[i];
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 2; i < h; i++){
        for(int j = 2; j < w; j++){
            if(a[i][j] == '#') continue;
            else {
                int x = i, y = j;
                bool flag = 1;
                for(int k = 1; k <= n; k++){
                    if(m[k] == 'L'){
                        if(a[x][y - 1] == '.'){
                            y = y - 1;
                        } else {
                            flag = 0;
                            break;
                        }
                    } else if(m[k] == 'R'){
                        if(a[x][y + 1] == '.'){
                            y = y + 1;
                        } else {
                            flag = 0;
                            break;
                        }
                    } else if(m[k] == 'U'){
                        if(a[x - 1][y] == '.'){
                            x = x - 1;
                        } else {
                            flag = 0;
                            break;
                        }
                    } else if(m[k] == 'D'){
                        if(a[x + 1][y] == '.'){
                            x = x + 1;
                        } else {
                            flag = 0;
                            break;
                        }
                    }
                }
                if(flag) cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}