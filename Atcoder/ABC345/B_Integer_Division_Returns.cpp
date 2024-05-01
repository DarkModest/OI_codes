#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string s;
    cin >> s;
    if(s[0] == '0' || (s[0] == '-' && s[1] == '0')){//特判0和整十数
        cout << 0 << endl;
        return 0;
    } 
    else if(s[s.length() - 1] == '0'){
        s.pop_back();
    } else {
        if(s[0] == '-'){ //负数
            if(s.length() == 2){ //特判负个位数
                cout << 0 << endl;
                return 0;
            }
            s.pop_back();
        } else { //正数
            if(s.length() == 1){ //特判正个位数
                cout << 1 << endl;
                return 0;
            }
            char c = s[s.length() - 2] + 1;
            s.pop_back(); s.pop_back();
            s.push_back(c);
        }
    }
    cout << s << endl;
    
    return 0;
}