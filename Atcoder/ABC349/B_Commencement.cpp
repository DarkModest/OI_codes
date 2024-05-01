#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string s;
    int a[30] = {0}, b[105] = {0};
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        a[s[i] - 'a' + 1]++;
    }
    for(int i = 1; i <= s.length(); i++){
        for(int j = 1; j <= 26; j++){
            if(a[j] == i) b[i]++;
        }
    }
    for(int i = 1; i <= s.length(); i++){
        if(b[i] != 2 && b[i] != 0){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}