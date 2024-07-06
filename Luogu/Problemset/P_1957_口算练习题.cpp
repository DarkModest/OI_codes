#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int n;


signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n;
    string c1, c2, c3;
    char ysf;
    
    for(int i = 1; i <= n; i++){
        string s;
        cin >> c1 >> c2;
        if(c1[0] == 'a' || c1[0] == 'b' || c1[0] == 'c'){
            ysf = c1[0];
            c1 = c2;
            cin >> c2;
        }
        int num1 = stoi(c1);
        int num2 = stoi(c2);
        s.append(c1); //1stnum
        if(ysf == 'a'){ //ysf
            s.push_back('+');
        }
        else if(ysf == 'b'){
            s.push_back('-');
        }
        else if(ysf == 'c'){
            s.push_back('*');
        }
        s.append(c2); //2ndnum
        s.push_back('='); //=
        int result;
        if(ysf == 'a'){
            result = num1 + num2;
        }
        else if(ysf == 'b'){
            result = num1 - num2;
        }
        else if(ysf == 'c'){
            result = num1 * num2;
        }
        s.append(to_string(result));
        cout << s << endl << s.length() << endl;
    }
    return 0;
}