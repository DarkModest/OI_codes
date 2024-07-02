#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e5+5;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, k;
    int a[N];
    int cnt = 0;
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++){
        if(a[i] > 0){
            a[i]--;
            cnt++;
            if(cnt == k) break;
        }
        if(i == n) i = 1;
    }
    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }


    return 0;
}