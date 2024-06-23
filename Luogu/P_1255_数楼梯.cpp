#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int f(int x){
    if(x == 1) return 1;
    else if(x == 2) return 2;
    return f(x - 1) + f(x - 2);
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}