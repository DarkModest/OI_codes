#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, m;
    vector<pair<int, int>> v;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        v.push_back({x, 1});
    }
    for(int i = 1; i <= m; i++){
        int x;
        cin >> x;
        v.push_back({x, 2});
    }
    sort(v.begin(), v.end());
    for(int i = 1; i < v.size(); i++){
        if(v[i].second == v[i - 1].second && v[i].second == 1){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}