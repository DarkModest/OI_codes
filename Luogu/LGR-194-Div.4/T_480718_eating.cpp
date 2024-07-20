#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int n, m;
struct d{
    double a;
    double b;
    int id;
    double w;
} a[100005];

bool cmp(d x, d y){
    if(x.w == y.w) return x.id < y.id;
    return x.w > y.w;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i].a >> a[i].b;
        a[i].w = a[i].b / a[i].a;
        a[i].id = i;
    }

    sort(a + 1, a + n + 1, cmp);
    cout << a[1].id << endl;
    return 0;
}