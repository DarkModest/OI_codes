#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 2e5+5;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int cases;
    cin >> cases;
    for(int ii = 1; ii <= cases; ii++){
        int n;
        int p[N];
        cin >> n;
        for(int i = 1; i <= n; i++)
            cin >> p[i];
        for(int i = n; i >= 1; i--)
            cout << p[i];
    }
    return 0;
}