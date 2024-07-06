#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool one = 0;
bool two = 0;
bool four = 0;

void f1(int x){
    if(x == 1){
        one = 1;
    } else if(x == 2){
        two = 1;
    } else if(x == 3){
        one = 1; two = 1;
    } else if(x == 4){
        four = 1;
    } else if(x == 5){
        one = 1; four = 1;
    } else if(x == 6){
        two = 1; four = 1;
    } else if(x == 7){
        one = 1; two = 1; four = 1;
    }
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int a, b;
    cin >> a >> b;

    int ans = 0;
    f1(a); f1(b);
    if(one == 1) ans += 1;
    if(two == 1) ans += 2;
    if(four == 1) ans += 4;
    
    cout << ans << endl;
    return 0;
}