#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    stack<int> s;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int num;
        cin >> num;
        s.push(num);
        while(s.size() > 1){
            int topn = s.top();
            s.pop();
            if(topn == s.top()){
                s.pop();
                s.push(topn + 1);
            } else {
                s.push(topn);
                break;
            }
        }
    }
    cout << s.size() << endl;
    return 0;
}