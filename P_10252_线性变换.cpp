#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int n;
int x, a, b;

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> x >> a >> b;
        
        if(a > b)
            cout << x << endl;
        else if (b == 0)
            cout << x * min(a, 1ll) << endl;
        else if(a == b){
            if(x == 1) cout << -b << endl;
            else if (a == 1) cout << -1 << endl;
            else cout << x << endl;
        } else if(a == 1) cout << x - (x / b + 1) * b << endl;
        else {
            int tmp = a * x - b;
            if(tmp > x) cout << x << endl;
            else {
                while(tmp >= 0){
                    tmp = a * tmp - b;
                }
                cout << tmp << endl;
            }
        }
        }
        return 0;
    }
    