#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int check(int a, int b, int c, int d){
    if(a > c && b >= d) return 1;
    if(a >= c && b > d) return 1;
    return 0;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int cases;
    cin >> cases;
    for(int ii = 1; ii <= cases; ii++){
        int a, b, c, d;
        int cnt = 0;
        cin >> a >> b >> c >> d;
        if(check(a, b, c, d)) cnt++;
        if(check(a, b, d, c)) cnt++;
        if(check(b, a, c, d)) cnt++;
        if(check(b, a, d, c)) cnt++;
        cout << cnt << endl;
    }
    return 0;
}