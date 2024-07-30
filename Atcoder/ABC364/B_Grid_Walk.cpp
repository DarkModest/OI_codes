#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int h, w;
    int a, b;
    char c[55][55];
    string x;
    cin >> h >> w;
    cin >> a >> b;
    for(int i = 1; i <= h; i++)
        for(int j = 1; j <= w; j++)
            cin >> c[i][j];
    cin >> x;
    for(auto i : x){
        if(i == 'U'){
            if(c[a - 1][b] == '.')
                a--;
        } else if(i == 'D'){
            if(c[a + 1][b] == '.')
                a++;
        } else if(i == 'L'){
            if(c[a][b - 1] == '.')
                b--;
        } else if(i == 'R'){
            if(c[a][b + 1] == '.')
                b++;
        }
        //cout << a << " " << b << endl;
    }
    cout << a << " " << b << endl;
    return 0;
}