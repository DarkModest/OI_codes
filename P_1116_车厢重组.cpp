#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    int a[10005];
    int cnt = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            if(a[i] > a[j]){
                swap(a[i], a[j]);
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}