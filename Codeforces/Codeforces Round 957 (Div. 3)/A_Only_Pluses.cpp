#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int t;
int a, b, c;


signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> t;
    for(int n = 1; n <= t; n++){
        int ans = 0;
        cin >> a >> b >> c;
        for(int i = 0; i <= 5; i++){
            for(int j = 0; j <= 5 - i; j++){
                for(int k = 0; k <= 5 - i - j; k++){
                    ans = max(ans, (a + i)*(b + j)*(c + k));
                    ans = max(ans, (a + i)*(b + k)*(c + j));
                    ans = max(ans, (a + j)*(b + i)*(c + k));
                    ans = max(ans, (a + j)*(b + k)*(c + i));
                    ans = max(ans, (a + k)*(b + i)*(c + j));
                    ans = max(ans, (a + k)*(b + j)*(c + i));
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}