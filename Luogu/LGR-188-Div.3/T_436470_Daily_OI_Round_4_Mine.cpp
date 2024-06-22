#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e5+5;
int n, m;
int a[N] = {}, d[N] = {};
int maxn = 0;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        int x, y;
        cin >> x >> y;
        d[x]++;
        d[y + 1]--;
        maxn = max(maxn, y);
    }

    a[i] = 0;
    for(int i = 1; i <= maxn; i++)
        a[i] = a[i - 1] + d[i];

    for(int i = 1; i <= m; i++){
        
    }
    return 0;
}