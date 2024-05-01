#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 2e5 + 5;

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, a, b;
    int d[N];
    cin >> n >> a >> b;
    for(int i = 1; i <= n; i++){
        int tmp;
        cin >> tmp;
        d[i] = tmp % (a + b);
    }

    







/*
    bool flag = 1;
    for(int i = 0; i < a + b; i++){
        for(int j = 1; j <= n; j++){
            if(i + d[j] > a){
                flag = 0;
                break;
            }
        }
        if(flag) break;
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
*/
    return 0;
}