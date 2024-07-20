#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int n;
struct d{
    string table_name;
    int x, y;
    string columns[105];
    string info[105][15];
} a[15];

int m;

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i].table_name;
        cin >> x >> y;
        for(int j = 1; j <= y; j++) cin >> columns[j];
        for(int j = 1; j <= x; j++){
            for(int k = 1; k <= y; k++){
                cin >> info[j][k];
            }
        }
    }
    cin >> m;
    for(int i = 1; i <= m; i++){
        string select, from, where;
        vector<string> slc;
        int dh = -1;
        cin >> select >> select;
        cin >> from >> from;
        cin >> where >> where;
        for(int j = 0; j < select.length(); j++){
            if(select[j] == ','){
                if(dh == -1){
                    slc.push_back(select.substr(0, j + 1));
                    dh = j;
                } else {
                    slc.push_back(select.substr(dh, j - dh));
                    dh = j;
                }
            }
        }
    }
    return 0;
}