#include<bits/stdc++.h>
using namespace std;

int l, r;

int main(){
    cin >> l >> r;
    if(!l && !r || l && r) cout << "Invalid" << endl;
    else if(l && !r) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}