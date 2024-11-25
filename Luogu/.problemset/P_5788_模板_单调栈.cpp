#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 3e6 + 5;
int n, a[N];
stack<int> st;
int f[N];
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = n; i >= 1; i--){
        while(!st.empty() && a[st.top()] <= a[i]) st.pop();
        f[i] = (st.empty() ? 0 : st.top());
        st.push(i);
    }
    for(int i = 1; i <= n; i++)
        cout << f[i] << " ";
    return 0;
}