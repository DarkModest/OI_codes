#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int n;
string name[105];
int age[105];
int minn = 1e9;
int pos;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> name[i] >> age[i];
        if(minn > age[i]){
            minn = age[i];
            pos = i;
        }
    }
    for(int i = pos; i <= n; i++) cout << name[i] << endl;
    for(int i = 1; i < pos; i++) cout << name[i] << endl;
} 