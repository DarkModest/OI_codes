#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
double a, b, c, d;
double arr[5];
double f(double x){
    return a * pow(x, 3) + b * pow(x, 2) + c * x + d;
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> a >> b >> c >> d;
    for(int i = 1; i <= 3; i++){
        bool flag = true;
        while(flag){
            double x1 = -100, x2 = 100;
            if(abs(x1 - x2) < 1){

            }
            if(f(x1) * f(x2) < 0){
                x1 /= 2;
            } else if(f(x1) * f(x2) > 0){
                x2 /= 2;
            } else {
                arr[i] = x1;
                flag = false;
            }
        }
        cout << arr[i] << " ";
    }
    return 0;
}