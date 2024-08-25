#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 2e5+5;
int n;
int a[N];
int ans;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    for(int i = 1; i <= n; i++){
        int att = a[i] / 5;
        ans += att * 3;
        a[i] -= att * 5;
        while(a[i] > 0){
            ans++;
            if(ans % 3 == 0)
                a[i] -= 3;
            else
                a[i]--;
        }
    }
    cout << ans << endl;
    return 0;
}