#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    vector<int> v;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int a, b;
        cin >> a >> b;
        if(a == 1) v.emplace_back(b);
        if(a == 2) cout << v[v.size() - b] << endl;
    }
    return 0;
}