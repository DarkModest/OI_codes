#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e6+5;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    int a[N], b[N];
    int x, y;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++){
        cin >> b[i];
    }
    cin >> x >> y;

    int minn = N;
    int ax, ay;
    if(x == 0){
        for(int i = 1; i <= n; i++){
            if(a[i] == 0 && abs(y - i) < minn){
                minn = abs(y - i);
                ax = 0;
                ay = abs(y - i);
            }
        }
        for(int i = 1; i <= n; i++){
            if(b[i] == 0 && abs(y - i) < minn){
                minn = abs(y - i);
                ax = 1;
                ay = abs(y - i);
            }
        }
    } else {
        for(int i = 1; i <= n; i++){
            if(b[i] == 0 && abs(y - i) < minn){
                minn = abs(y - i);
                ax = 1;
                ay = abs(y - i);
            }
        }
        for(int i = 1; i <= n; i++){
            if(a[i] == 0 && abs(y - i) < minn){
                minn = abs(y - i);
                ax = 0;
                ay = abs(y - i);
            }
        }
    }
    if(minn == N){
        cout << -1 << endl;
        return 0;
    } else {
        cout << ax << " " << ay << endl;
    }
    return 0;
}