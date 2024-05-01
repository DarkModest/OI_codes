#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int q;
    string s;
    cin >> q >> s;
    for(int i = 1; i <= q; i++){
        char c;
        cin >> c;
        if(c == '1'){
            string str;
            cin >> str;
            s += str;
            cout << s << endl;
        } else if(c == '2'){
            int a, b;
            cin >> a >> b;
            string str = s.substr(a, b);
            s = str;
            cout << s << endl;
        } else if(c == '3'){
            int a;
            string str;
            cin >> a >> str;
            s.insert(a, str);
            cout << s << endl;
        } else if(c == '4'){
            string str;
            cin >> str;
            if(s.find(str) < s.length())
                cout << s.find(str) << endl;
            else
                cout << -1 << endl;
        }
    }
    return 0;
}