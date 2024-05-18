#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int y;
    bool flag = 0;
    cin >> y;
    if(y % 4 == 0){
        if(y % 4 == 0 && y % 100 != 0){
            flag = 1;
        } else if(y % 100 == 0 && y % 400 != 0){
            flag = 0;
        } else if(y % 400 == 0 && y % 3200 != 0){
            flag = 1;
        } else if(y % 3200 == 0 && y % 172800 != 0){
            flag = 0;
        } else if(y % 172800 == 0){
            flag = 1;
        }
    } else {
        flag = 0;
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0; 
}