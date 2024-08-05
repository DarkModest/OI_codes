#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int n;
int a[15], cnt = 0, f[15];
void dfs(int step){
    if(step > n){
        for(int i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << endl;
        cnt++;
        return;
    }
    for(int i = 1; i <= n; i++){
        if(f[i] == 0){
            a[step] = k;
            f[i] = 1;
            dfs(step + 1);
            f[i] = 0;
        }
    }
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    dfs(1);
    cout << cnt << endl;
    return 0;
}