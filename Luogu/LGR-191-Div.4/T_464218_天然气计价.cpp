#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    double sum = 0;
    double m;
    for(int i = 1; i <= 12; i++){
        cin >> m;
        double last_sum = sum;
        sum += m;
        if(sum <= 310) cout << fixed << setprecision(1) << m * 3 << endl;
        else if(310 < sum && sum <= 520){
            if(last_sum <= 310){
                cout << fixed << setprecision(1) << (310 - last_sum) * 3 + (m - (310 - last_sum)) * 3.3 << endl;
            } else {
                cout << fixed << setprecision(1) << m * 3.3 << endl;
            }
        } else {
            if(last_sum <= 310){
                cout << fixed << setprecision(1) << (310 - last_sum) * 3 + 210 * 3.3 + (m - (520 - last_sum)) * 4.2 << endl;
            } else if(last_sum <= 520){
                cout << fixed << setprecision(1) << (520 - last_sum) * 3.3 + (m - (520 - last_sum)) * 4.2 << endl;
            } else {
                cout << fixed << setprecision(1) << m * 4.2 << endl;
            }
        }
    }

    return 0;
}