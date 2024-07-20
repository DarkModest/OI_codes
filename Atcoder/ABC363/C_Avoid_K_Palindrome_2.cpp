#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int n, k;
string s;

bool check(string x){
    string y = x;
    reverse(y.begin(), y.end());
    return x == y;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n >> k >> s;

    int cnt = 0;
    sort(s.begin(), s.end());
    do{
        bool okk = 1;
        for(int i = 0; i < n - k + 1; i++){
            if(check(s.substr(i, k))){
                okk = 0;
                break;
            }
        }
        if(okk == 1) cnt++;
    }while(next_permutation(s.begin(), s.end()));
    cout << cnt << endl;
    return 0;
}