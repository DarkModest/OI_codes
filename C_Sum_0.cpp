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
        sum = suml;
        bool ok = false;
        for(int i = 1; i <= n; i++){
            if(!ok){
                sum -= l[i];
                sum += r[i];
                if(sum <= 0){
                    cout << r[i] << " ";
                } else if (sum > 0){
                    sum -= r[i];
                    sum += l[i];
                    cout << -sum << " ";
                    ok = true;
                }
            } else {
                cout << l[i] << " ";
            }
        }
    } else cout << "No" << endl;
    return 0;
}