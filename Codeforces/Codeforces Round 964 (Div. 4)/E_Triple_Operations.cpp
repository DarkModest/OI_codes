#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 2e5+5;
int d[N], sum[N];
int gd(int x){
    int cnt = 0;
    while(x){
        cnt++;
        x /= 3;
    }
    return cnt;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int cases;
    cin >> cases;
    for(int i = 1; i <= N - 1; i++){
        d[i] = gd(i);
        sum[i] = sum[i - 1] + d[i];
    }

    for(int ii = 1; ii <= cases; ii++){
        sum[0] = 0;
        int a, b;
        cin >> a >> b;
        cout << sum[b] - sum[a - 1] + d[a] << endl;
    }
    return 0;
}