#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(!(isalpha(s[i]))){
            s.erase(i, 1);
            i--;
        }
    }
    cout << s << endl;
    return 0;
}