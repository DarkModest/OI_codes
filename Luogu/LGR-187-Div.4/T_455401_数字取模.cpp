#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string x;
    int k;
    string ans = "";
    cin >> x >> k;
    for(int i = 0; i < 4; i++){
        int a = x[i] - '0';
        a %= k;
        ans.push_back(a + '0');
    }
    cout << stoi(ans) << endl;
    return 0;
}