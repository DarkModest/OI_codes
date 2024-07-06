#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

const int N = 2e5 + 5;
struct d{ //定义结构体
    int a, c;
} b[N];
int n;
int ans = 0;

bool cmp(d x, d y){ //cmp函数
    if(x.c == y.c) return x.a < y.a; //颜色相同,按照美味度升序排序
    else return x.c < y.c; //颜色不同,按照颜色升序排序
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    //输入
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> b[i].a >> b[i].c;

    sort(b + 1, b + n + 1, cmp); //排序
    for(int i = 1; i <= n; i++){
        if(b[i].c != b[i - 1].c) //如果颜色改变,此时b[i].a为颜色为b[i].c的豆子的最小美味度
            ans = max(ans, b[i].a); //记录所有豆子中最大的最小美味度
    }
    cout << ans << endl;
    return 0;
}