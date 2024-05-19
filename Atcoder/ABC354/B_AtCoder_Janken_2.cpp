#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int n;
string s[105];
int t = 0;
int a[105];

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++){
        int num;
        cin >> s[i] >> num;
        t += num;
    }
    sort(s, s + n);
    for(int i = 0; i < n; i++){
        if(i == t % n) cout << s[i] << endl;
    }
    return 0;
}