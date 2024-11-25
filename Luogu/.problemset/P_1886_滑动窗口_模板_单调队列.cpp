#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e6+5;
int n, k;
int a[N];
deque<int> q;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++){
        while(!q.empty() && a[q.back()] >= a[i]) q.pop_back();
        q.push_back(i);
        if(i >= k){
            while(q.front() <= i - k) q.pop_front();
            cout << a[q.front()] << " ";
        }
    }
    cout << endl;
    while(!q.empty()) q.pop_front();
    for(int i = 1; i <= n; i++){
        while(!q.empty() && a[q.back()] <= a[i]) q.pop_back();
        q.push_back(i);
        if(i >= k){
            while(q.front() <= i - k) q.pop_front();
            cout << a[q.front()] << " ";
        }
    }
    return 0;
}