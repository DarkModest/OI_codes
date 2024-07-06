#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 2e5+5;
int n, t;
string s;
int a[N];
vector<int> x, y;

int cnt = 0;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n >> t >> s;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (s[i - 1] == '0') {
            x.push_back(a[i]);
        } else {
            y.push_back(a[i]);
        }
    }
    sort(x.begin(), x.end()), sort(y.begin(), y.end());
    for (auto i : x) {
        int l = lower_bound(y.begin(), y.end(), i - 2 * t) - y.begin();
        int r = upper_bound(y.begin(), y.end(), i) - y.begin();
        cnt += r - l;
    }
    cout << cnt << endl;
    return 0;
}
// d < 2 * t
// 1 & 0