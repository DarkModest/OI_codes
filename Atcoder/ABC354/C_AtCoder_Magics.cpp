#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

const int N = 2e5+5;
int minn = 1e9+1;
struct card{
    int id;
    int a;
    int c;
} m[N];
int n;
vector<int> ans;

bool cmp(card x, card y){
    return x.a > y.a;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> m[i].a >> m[i].c;
        m[i].id = i;
    }
    sort(m + 1, m + n + 1, cmp);
    for(int i = 1; i <= n; i++){
        if(minn > m[i].c){
            minn = m[i].c;
            ans.push_back(m[i].id);
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}