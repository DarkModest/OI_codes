#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 2e5+5;
int n, x, y;
int a[N], b[N];
bool cmp(int x, int y){
    return x > y; 
}
int sumx = 0, sumy = 0;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


    cin >> n >> x >> y;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 1; i <= n; i++)
        cin >> b[i];
    sort(a + 1, a + n + 1, cmp);
    sort(b + 1, b + n + 1, cmp);
    for(int i = 1; i <= n; i++){
        sumx += a[i];
        sumy += b[i];
        if(sumx > x || sumy > y){
            cout << i << endl;
            return 0;
        }
    }
    cout << n << endl;
    return 0;
}