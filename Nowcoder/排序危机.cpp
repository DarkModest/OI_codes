#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int n;
string s;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n >> s;
    for(auto i : s) if('a' <= i && i <= 'z') cout << i;
    for(auto i : s) if('0' <= i && i <= '9') cout << i;
    for(auto i : s) if('A' <= i && i <= 'Z') cout << i;
    return 0;
}