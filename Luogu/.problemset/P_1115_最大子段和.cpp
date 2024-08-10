#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 2e5 + 5;

int n;
int a[N], b[N], c[N];
int maxn = 0, minn = 0;
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    b[0] = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        b[i] = b[i - 1] + a[i];
    }

    for(int i = 1; i <= n; i++){
        c[i] = 
    }
    cout << maxn << endl;
    return 0;
}
#include<iostream>
using namespace std;
int n,a[200001]={0},c[200001]={0},b[200001]={0},minn=0,mann=-99999;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=b[i-1]+a[i];
    }
    c[1]=a[1];
    minn=min(0,b[1]);
    for(int i=2;i<=n;i++)
    {
        c[i]=b[i]-minn;
        minn=min(minn,b[i]);
    }
    for(int i=1;i<=n;i++) mann=max(mann,c[i]);
    cout<<mann<<endl;
}