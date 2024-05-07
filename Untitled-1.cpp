#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool cmp(int left, int right){
    return left > right;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int a[8] = {1, 3, 2, 4, 6, 5, 7, 8};
    sort(a, a + 8, cmp);
    for(int i = 1; i <= 8; i++)
        cout << a[i] << " ";
    return 0;
}