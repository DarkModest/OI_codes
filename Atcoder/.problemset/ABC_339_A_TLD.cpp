#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string s;
    cin >> s;
    int a;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '.')
            a = i;
    }
    for(int i = a + 1; i < s.length(); i++){
        cout << s[i];
    }
    return 0;
}