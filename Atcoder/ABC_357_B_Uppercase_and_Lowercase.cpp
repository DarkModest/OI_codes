#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string s;
    int cnt1 = 0, cnt2 = 0;
    cin >> s;
    for(auto i : s){
        if(i <= 'Z') cnt1++;
        else cnt2++;
    }
    if(cnt1 > cnt2)
        for(auto i : s) cout << char(toupper(i));
    else
        for(auto i : s) cout << char(tolower(i));
    return 0;
}