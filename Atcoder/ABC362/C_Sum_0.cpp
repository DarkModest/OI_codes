#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 2e5+5;
int n;
int l[N], r[N];
int sum;
int suml = 0, sumr = 0;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> l[i] >> r[i];
        suml += l[i];
        sumr += r[i];
    }
    if(suml <= 0 && sumr >= 0){
        cout << "Yes" << endl;
        int need = suml;
        bool ok = 0;
        for(int i = 1; i <= n; i++){
            if(need - l[i] + r[i] < 0 && !ok){
                need = need - l[i] + r[i];
                cout << r[i] << " ";
                //cout << endl << "need = " << need << endl;
            } else if(ok){
                cout << l[i] << " ";
            } else {
                ok = 1;
                cout << l[i] - need << " ";
            }
        }
    } else cout << "No" << endl;
    return 0;
}