#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        string s;
        cin >> s;
        if(stoi(s.substr(0,2)) < 12){
            if(s.substr(0,2) == "00"){
                s.erase(0,2);
                s.insert(0,"12");
            }
            s += " AM";
        } else {
            int h = stoi(s.substr(0, 2)) - 12;
            string hh = to_string(h);
            if(h < 10) hh.insert(0, "0");
            if(h == 0) hh = "12";
            s.erase(0,2);
            s.insert(0, hh);
            s += " PM";
        }
        cout << s << endl;
    }
    return 0;
}