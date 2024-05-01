#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

vector<int> a;

void f(){
    if(a.empty() || a.size() == 1) return;
    else if(a.back() != a[a.size() - 2]) return;
    a.pop_back();
    a.back()++;
    return;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int num;
        cin >> num;
        a.push_back(num);
        f();
    }
    cout << 1 << endl;
    return 0;
}