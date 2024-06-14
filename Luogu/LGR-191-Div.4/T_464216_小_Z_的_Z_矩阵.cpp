#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) cout << 'Z';
    cout << endl;
    for(int i = 1; i <= n - 2; i++){
        for(int j = 1; j <= n - 1 - i; j++) cout << '-';
        cout << 'Z';
        for(int j = 1; j <= i; j++) cout << '-';
        cout << endl;
    }
    for(int i = 1; i <= n; i++) cout << 'Z';
    cout << endl;
    return 0;
}