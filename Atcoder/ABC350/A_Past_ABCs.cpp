#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string s;
    cin >> s;
    int a = stoi(s.substr(3, 5));
    if(s.substr(0, 3) == "ABC" && a <= 349 && a != 316 && a != 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}