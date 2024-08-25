#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int n;
int a[105];
int ans;
int maxn;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        maxn += a[i];
    }
    sort(a + 1, a + n + 1);
    for(int i = 1; i <= maxn * 2; i++){
        a[n]--, a[n - 1]--;
        ans++;
        sort(a + 1, a + n + 1);
        if(a[n - 1] == 0){
            cout << ans << endl;
            return 0;
        }
    }
    return 0;
}