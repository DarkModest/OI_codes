#include<bits/stdc++.h>
using namespace std;
//#define int long long
#define pii pair<int,int>
const int N=1e5+5;
//cnt1[i]是国内第i个廊桥的停机数，cnt2是国际
int n,m1,m2,cnt1[N],cnt2[N],len1,len2;
pii na[N],inter[N];
//na存国内的起止时间，inter存国际
signed main(){
    scanf("%d%d%d",&n,&m1,&m2);
    for(int i=1;i<=m1;i++) scanf("%d%d",&na[i].first,&na[i].second);
    for(int i=1;i<=m2;i++) scanf("%d%d",&inter[i].first,&inter[i].second);
    sort(na+1,na+1+m1);
    sort(inter+1,inter+1+m2);
    priority_queue<pii,vector<pii>,greater<pii> > q1,q2;
    q1.push({-1,1});
    len1=1;
    for(int i=1;i<=m1;i++){
        if(q1.top().first<=na[i].first){
            cnt1[q1.top().second]++;
            int tmp=q1.top().second;
            q1.pop();
            q1.push({na[i].second,tmp});
        }else if(len1<n){
            cnt1[++len1]++;
            q1.push({na[i].second,len1});
        }
    }
    for(int i=1;i<=n;i++) cnt1[i]+=cnt1[i-1];
    q2.push({-1,1});
    len2=1;
    for(int i=1;i<=m2;i++){
        if(q2.top().first<=inter[i].first){
            cnt2[q2.top().second]++;
            int tmp=q2.top().second;
            q2.pop();
            q2.push({inter[i].second,tmp});
        }else if(len2<n){
            cnt2[++len2]++;
            q2.push({inter[i].second,len2});
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++) cnt2[i]+=cnt2[i-1];
    for(int i=0;i<=n;i++) ans=max(cnt1[i]+cnt2[n-i],ans);
    printf("%d\n",ans);
    return 0;
}