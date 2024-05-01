#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int a = 0, b = 0;
    for(int i = 1; i <= 9; i++){
        int num;
        cin >> num;
        a += num;
    }
    for(int i = 1; i <= 8; i++){
        int num;
        cin >> num;
        b += num;
    }
    cout << a - b + 1 << endl;
    return 0;
}