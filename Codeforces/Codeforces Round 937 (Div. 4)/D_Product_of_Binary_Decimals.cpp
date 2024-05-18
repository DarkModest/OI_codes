#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

vector<int> d = {1, 10, 11, 101, 110, 111, 1001, 1010, 1011, 1100, 1101, 1111, 10001, 10010, 10011, 10100, 10101, 10111, 11000, 11001, 11010, 11011, 11100, 11101, 11110, 11111, 100000};

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int num;
        cin >> num;
        bool flag = false;
        for(int j = 0; j < d.size(); j++){
            if(num == d[j]){
                flag = true;
                break;
            }
        }
        int cnt = 0;
        while(!flag){
            cnt++;
            if(cnt >= 100) break;
            for(int j = 0; j < d.size(); j++){
                if(num % d[j] == 0){
                    num /= d[j];
                    if(num == 1){
                        flag = true;
                        break;
                    }
                }
            }
            
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}