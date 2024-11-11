#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int n;
long double a, b, c, d;
bool check(int mid){
    long double x = mid / b;
    long double y = c / d;
    return x < y;
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a >> b >> c >> d;
        int l = 0, r = 1e18, mid;
        while(l < r){
            mid = (l + r + 1) >> 1;
            if(check(mid)){
                l = mid;
            } else {
                r = mid - 1;
            }
        }
        cout << a - l << " ";
    }
    return 0;
}