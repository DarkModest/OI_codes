#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 2e5 + 5;

int n;
int arr[N];
vector<pair<int, int>> ans;

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    for(int i = 1; i <= n; i++){
        while(arr[i] != i){
            ans.push_back(pair<int, int>(i, arr[i]));
            swap(arr[i], arr[arr[i]]);
        }
    }
    cout << ans.size() << endl;
    for(auto [u, v] : ans){
        cout << u << " " << v << endl;
    }
    return 0;
}