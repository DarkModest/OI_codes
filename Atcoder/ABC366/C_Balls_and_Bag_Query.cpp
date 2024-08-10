#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e6+5;
int a[N];
vector<int> v;
int cnt = 0;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    a[0] = 0;
    int q;
    cin >> q;
    for(int ii = 1; ii <= q; ii++){
        int t;
        cin >> t;
        if(t == 1){
            int x;
            cin >> x;
            a[x] ++;
            if(a[x] == 1) cnt++;
        }
        if(t == 2){
            int x;
            cin >> x;
            a[x] --;
            if(a[x] == 0) cnt--;
        }
        if(t == 3){
            cout << cnt << endl;
        }
    }
    return 0;
}