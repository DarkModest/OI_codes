#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int k, n;
    int a[105];
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = n - k + 1; i <= n; i++)
        cout << a[i] << ' ';
    for(int i = 1; i < n - k + 1; i++)
        cout << a[i] << ' ';
    return 0;
}