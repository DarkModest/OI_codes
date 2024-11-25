#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int n;
int a, x;
queue<int> q;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    while(n--){
        cin >> a;
        if(a == 1){
            cin >> x;
            q.push(x);
        } else if(a == 2){
            if(q.empty()) cout << "ERR_CANNOT_POP" << endl;
            else q.pop();
        }
        else if(a == 3){
            if(q.empty()) cout << "ERR_CANNOT_QUERY" << endl;
            else cout << q.front() << endl;
        }
        else cout << q.size() << endl;

    }
    return 0;
}