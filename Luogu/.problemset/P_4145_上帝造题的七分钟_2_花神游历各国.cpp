//stolen
#include<bits/stdc++.h>
using namespace std;
#define MAXN 100005
#define completecan t[i].l>=l&&t[i].r<=r&&( (t[i].minn-(long long)sqrt(t[i].minn) )==( t[i].maxn-(long long)sqrt(t[i].maxn) ))
#define complete t[i].l>=l&&t[i].r<=r
#define lr i<<1
#define rr i<<1|1
long long n,m,a[MAXN];
struct node{
	int l,r;
	long long maxn,minn,sum,substruction;
}t[MAXN*4];

inline void up(int i){
	t[i].sum=t[lr].sum+t[rr].sum;
	t[i].minn=min(t[lr].minn,t[rr].minn);
	t[i].maxn=max(t[lr].maxn,t[rr].maxn);
}

inline void build(int i,int l,int r){
	t[i].l=l;
	t[i].r=r;
	t[i].substruction=0;
	if(r==l){
		t[i].sum=t[i].minn=t[i].maxn=a[l];
		return ;
	}
	//cout<<i<<' '<<t[i].l<<' '<<t[i].r<<' '<<t[i].sum<<endl;
	int mid=(l+r)/2;
	build(lr,l,mid);
	build(rr,mid+1,r);
	up(i);
}
inline void pushdown(int i){
	if(t[i].substruction!=0){
		t[lr].sum-=(t[lr].r-t[lr].l+1)*t[i].substruction;
		t[rr].sum-=(t[rr].r-t[rr].l+1)*t[i].substruction;
		t[lr].substruction+=t[i].substruction;
		t[rr].substruction+=t[i].substruction;
		t[lr].minn-=t[i].substruction;
		t[lr].maxn-=t[i].substruction;
		t[rr].minn-=t[i].substruction;
		t[rr].maxn-=t[i].substruction;
		t[i].substruction=0;
	}
	return ;
}
inline void sqrt_tree(int i,int l,int r){
	//cout<<i<<' '<<t[i].l<<' '<<t[i].r<<' '<<t[i].sum<<endl;
	if(completecan){
		long long temp=t[i].minn-(long long)sqrt(t[i].minn);
		t[i].substruction+=temp;
		t[i].sum-=temp*(t[i].r-t[i].l+1);
		t[i].maxn-=temp;
		t[i].minn-=temp;
		return ;
	}
	//if(t[i].r<l||t[i].l>r) return ;
	pushdown(i);
	if(t[lr].r>=l) sqrt_tree(lr,l,r);
	if(t[rr].l<=r) sqrt_tree(rr,l,r);
	up(i);
	return ;
}
inline long long search(int i,int l,int r){
	if(complete) return t[i].sum;
	//if(t[i].l<r||t[i].r<l) return 0;
	pushdown(i);
	long long s=0;
	if(t[lr].r>=l) s+=search(lr,l,r);
	if(t[rr].l<=r) s+=search(rr,l,r);
	return s;
}
int main(){
	scanf("%lld",&n);
	for(int i=1;i<=n;i++) scanf("%lld",&a[i]);
	build(1,1,n);
	scanf("%lld",&m);
	while(m--){
		int k,l,r;
		scanf("%d%d%d",&k,&l,&r);
		if(l > r) swap(l, r);
		if(k==1) printf("%lld\n",search(1,l,r));
		else sqrt_tree(1,l,r);
	}
	return 0;
}