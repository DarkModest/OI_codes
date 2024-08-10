#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int n, m;
struct d{
    int id, s;
} a[5005], b[5005];

bool cmp(d x, d y){
    if(x.s == y.s) return x.id < y.id;
    return x.s > y.s;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        cin >> a[i].id >> a[i].s;
    sort(a + 1, a + n + 1, cmp);
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        int maxn = floor(m * 1.5);
        if(a[maxn].s <= a[i].s){
            b[i].id = a[i].id;
            b[i].s = a[i].s;
            cnt++;
        }
    }
    sort(b + 1, b + cnt + 1, cmp);
    cout << b[cnt].s << " " << cnt << endl;
    for(int i = 1; i <= cnt; i++)
        cout << b[i].id << " " << b[i].s << endl;
    return 0;
}