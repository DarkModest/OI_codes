#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int n;
const int N = 105;
struct b{
    int id;
    string s;
    int y;
    int m;
    int d;
} a[N];

bool cmp(b left, b right){
    if(left.y == right.y){
        if(left.m == right.m){
            if(left.d == right.d){
                return left.id > right.id;
            } else {
                return left.d < right.d;
            }
        } else {
            return left.m < right.m;
        }
    } else {
        return left.y < right.y;
    }
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i].s >> a[i].y >> a[i].m >> a[i].d;
        a[i].id = i;
    }
    sort(a + 1,a + n + 1, cmp);
    for(int i = 1; i <= n; i++){
        cout << a[i].s << endl;
    }
    return 0;
}