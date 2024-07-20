#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int n, m;
struct d{
    int a;
    int b = 0;
    int id;
    int ml;
} a[1005];

bool cmp(d x, d y){
    if(x.ml == y.ml) return x.a < y.a;
    return x.ml > y.ml;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        cin >> a[i].a;
        a[i].id = i;
    }
        
    for(int i = 1; i <= n; i++){
        int num;
        cin >> num;
        a[num].b ++;
    }
    for(int i = 1; i <= m; i++)
        a[i].ml = a[i].a * a[i].b;
    sort(a + 1, a + m + 1, cmp);
    //for(int i = 1; i <= m; i++) cout << a[i].a << endl;
    cout << a[1].id << endl;
    return 0;
}