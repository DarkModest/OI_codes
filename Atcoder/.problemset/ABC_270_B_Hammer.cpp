#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int x, y, z;
    cin >> x >> y >> z;

    if(x > 0 && y > 0){ //正半轴
        if(x < y) cout << x << endl;
        else {
            if(z > y) cout << -1 << endl;
            else {
                if(z > 0) cout << x << endl;
                else cout << abs(z) * 2 + x << endl;
            }
        }
    } else if(x < 0 && y < 0){ //负半轴
        if(x > y){
            cout << abs(x) << endl;
        } else {
            if(z < y) cout << -1 << endl;
            else {
                if(z < 0) cout << abs(x) << endl;
                else cout << abs(z) * 2 + abs(x) << endl;
            }
        }
    } else if((x > 0 && y < 0) || (x < 0 && y > 0)){
        cout << abs(x) << endl;
    }


    return 0;
}