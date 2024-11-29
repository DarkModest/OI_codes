#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e4 + 5;
int n, m, fa[N];
int z, x, y;
int find(int x){
    if(fa[x] != x)
        fa[x] = find(fa[x]);
    return fa[x];
}
void unity(int x, int y){
    int r1 = find(x);
    int r2 = find(y);
    fa[r1] = r2;
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for(int i = 1; i <= n; i++) fa[i] = i;
    for(int i = 1; i <= m; i++){
        cin >> z >> x >> y;
        if(z == 1){
            unity(x, y);
        } else {
            cout << ((find(x) == find(y)) ? "Y" : "N") << endl;
        }
    }
    return 0;
}