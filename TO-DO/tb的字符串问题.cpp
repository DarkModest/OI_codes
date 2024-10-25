#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e6+5;
vector<char> v;
int n;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++){
        char c;
        cin >> c;
        v.push_back(c);
        int pos1 = v.size() - 2;
        int pos2 = v.size() - 1;
        while((v[pos1] == 'f' && v[pos2] == 'c') || (v[pos1] == 't' && v[pos2] == 'b')){
            v.pop_back(); v.pop_back();
            pos1 = v.size() - 2;
            pos2 = v.size() - 1;
        }
    }
    cout << v.size() << endl;
    return 0;
}