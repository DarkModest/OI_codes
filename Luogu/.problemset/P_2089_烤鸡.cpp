#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    int a[15] = {0};
    int cnt = 0;
    cin >> n;
    if(n == 0 || n > 30){
        cout << 0 << endl;
        return 0;
    }
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            if(n >= 0){
                n--;
                a[j]++;
            }
        }
        for(int j = 1; j <= 10; j++){
            cout << a[j] << " ";
        }
        cout << endl;
    }
    return 0;
}