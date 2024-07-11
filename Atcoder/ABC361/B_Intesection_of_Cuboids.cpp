#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int a1,a2,b1,b2,c1,c2;
int x1,x2,y11,y2,z1,z2;

bool check(){
    if(x1 == a1 && z1 == c1) return 1;
    else if(y11 == b1 && z1 == c1) return 1;
    else if(x1 == a1 && y11 == b1) return 1;
    else if((x1 < a1 && a1 < x2) && (y11 < b1 && b1 < y2) && (z1 < c1 && c1 < z2))
        return 1;
    return 0;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    
    cin>>x1>>y11>>z1>>x2>>y2>>z2;
    cin>>a1>>b1>>c1>>a2>>b2>>c2;
    
    if(check()){
        cout << "Yes" << endl;
        return 0;
    } else {
        swap(a1, x1);
        swap(b1, y11);
        swap(c1, z1);
        swap(a2, x2);
        swap(b2, y2);
        swap(c2, z2);
        if(check()){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}