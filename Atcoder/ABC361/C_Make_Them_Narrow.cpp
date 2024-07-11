#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int n, k;
vector<int> a;

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        int num;
        cin >> num;
        a.push_back(num);
    }
    sort(a.begin(), a.end());
    int ans = 1e9;
    for(int i = 0; i < k; i++){
        ans = min(ans, a[i + n - k - 1] - a[i]);
    }
    cout << ans << endl;
    return 0;
}
