#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string s;
    cin >> s;
    int ans = 0;
    int month = stoi(s.substr(0, 2));
    int day = stoi(s.substr(3, 2));
    cout << month << " " << day << endl;
    if(0 < month && month <= 12){
        if(month % 2 == 1)
            if(day == 0 || day > 31) ans++;
        else {
            if(month == 2){
                if(day == 0 || day > 28) ans++;
            } else {
                if(day == 0 || day > 30) ans++;
            }
        }
    } else {
        ans++;
        if(day == 0 || day > 28) ans++;
    }
    cout << ans << endl;
    return 0;
}