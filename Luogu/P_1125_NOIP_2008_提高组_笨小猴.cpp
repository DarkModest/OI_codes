#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool isPrime(int x){
    if(x == 0 || x == 1) return 0;
    for(int i = 2; i < x; i++)
        if(x % i == 0) return 0;
    return 1;
}


signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string s;
    cin >> s;

    int a[30] = {0};
    int maxn = 0, minn = 0;
    for(int i = 0; i < s.length(); i++){
        a[s[i] - 96]++;
    }
    for(int i = 1; i <= 26; i++){
        maxn = max(maxn, a[i]);
        if(a[i] != 0){
            if(minn == 0)
                minn = a[i];
            else
                minn = min(minn, a[i]);
        }
    }
    if(isPrime(maxn - minn)){
        cout << "Lucky Word" << endl;
        cout << maxn - minn << endl;
    } else {
        cout << "No Answer" << endl;
        cout << 0 << endl;
    }
    return 0;
}