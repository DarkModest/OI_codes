#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 2e5+5;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, t;
    cin >> n >> t;
    int a[N] = {0};
    for(int i = 1; i <= t; i++){
        int p, c;
        cin >> p >> c;
        a[p - 1] += c;
        sort(a, a + n);
        int num = unique(a, a + n) - a;
        cout << num << endl;
    }
    return 0;
}