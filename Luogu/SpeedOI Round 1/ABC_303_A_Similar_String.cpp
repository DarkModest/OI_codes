#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    string a, b;
    cin >> n >> a >> b;
    bool ok = true;
    for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                if(!((a[i] == '1' && b[i] == 'l') || (a[i] == 'l' && b[i] == '1') || (a[i] == '0' && b[i] == 'o') || (a[i] == 'o' && b[i] == '0'))) ok = 0;
            }
    }
    if(ok) cout << "Yes";
    else cout << "No";
    return 0;
}