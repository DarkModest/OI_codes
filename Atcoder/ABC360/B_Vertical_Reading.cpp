#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
string s; 
string t;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> s >> t;
    for(int w = 1; w < s.length(); w++){
        vector<string> sub;
        for(int c = 1; c <= w; c++){
            sub.clear();
            for(int i = 0; i < s.length(); i+=w)
                sub.push_back(s.substr(i, w));
        }
        for(int c = 1; c <= w; c++){
            string ans;
            for(auto x : sub){
                if(c <= x.length())ans += x[c - 1];
            }
            if(ans == t){
                cout << "Yes" << endl;
                return 0;
            } 
        }
    }
    cout << "No" << endl;
    return 0;
}