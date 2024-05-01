#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    string s;
    for(int i = 0; i <= 2 * n; i++){
        if(i % 2 == 0) s.push_back('1');
        if(i % 2 == 1) s.push_back('0');
    }

    cout << s << endl;
    return 0;
}