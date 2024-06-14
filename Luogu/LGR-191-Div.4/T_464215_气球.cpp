#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void f(int x){
    if(x == 1) cout << 'B';
    if(x == 2) cout << 'Y';
    if(x == 3) cout << 'R';
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    f(a);
    f(b);
    f(c);
    return 0;
}