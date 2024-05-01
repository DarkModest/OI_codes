#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 2e5 + 5;
int n, k;
int a[N];
int ans = 0;
vector<int> v;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(a[i] >= 1 && a[i] <= k){
            v.push_back(a[i]);
        }
    }

    ans = k * (1 + k) / 2;
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for(int i = 0; i < v.size(); i++){
        if(v[i] >= 1 && v[i] <= k) ans -= v[i];
    }
    cout << ans << endl;
    return 0;
}