#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e5+5;
int a[N];
int n, m;
struct tree{
	int L, R, data;
	int tag; //for multi update
}t[N * 4];

int ls(int p){
	return p << 1;
}
int rs(int p){
	return p << 1 | 1;
}

void pushup(int p){
	t[p].data = t[ls(p)].data + t[rs(p)].data;
}

void build(int p, int pl, int pr){
	if(pl == pr){
		t[p].data = a[pl];
        return;
	}
	int mid = (pl + pr) >> 1;
	build(ls(p), pl, mid);
	build(rs(p), mid + 1, pr);
	pushup(p);
}

/*
void single_update(int p, int pl, int pr, int x, int v){ //a[x] + v 单点修改 
	if(pl == pr){
		t[p].data = v;
		return;
	}
	int mid = (pl + pr) >> 1;
	if(x <= mid) //left child
		single_update(ls(p), pl, mid, x, v);
	else //right child
		single_update(rs(p), mid + 1, pr, x, v);
	pushup(p);
}
*/

//----
void addtag(int p, int pl, int pr, int v){ //给[pl, pr] 打上 lazy-tag += v 
	t[p].tag += v;
	t[p].data += (pr - pl + 1) * v;
}

void pushdown(int p, int pl, int pr){ //lazy-tag下传 
	if(t[p].tag){
		int mid = (pl + pr) >> 1;
		addtag(ls(p), pl, mid, t[p].tag);
		addtag(rs(p), mid + 1, pr, t[p].tag);
		t[p].tag = 0;
	}
}

void multi_update(int p, int ql, int qr, int pl, int pr, int v){ //区间更改 
	if(ql <= pl && pr <= qr) addtag(p, pl, pr, v);
	else {
		pushdown(p, pl, pr);
		int mid = (pl + pr) >> 1;
		if(ql <= mid) multi_update(ls(p), ql, qr, pl, mid, v);
		if(mid + 1 <= qr) multi_update(rs(p), ql, qr, mid + 1, pr, v);
		pushup(p);
}
	}
//----
int query(int p, int ql, int qr, int pl, int pr){ //查询[ql ,qr] 单点查询则ql = qr = x 
	if(pl >= ql && qr >= pr) return t[p].data;
    pushdown(p, pl, pr);
	int res = 0;
	int mid = (pl + pr) >> 1;
	if(ql <= mid) res += query(ls(p), ql, qr, pl, mid);
	if(mid + 1 <= qr) res += query(rs(p), ql, qr, mid + 1, pr);
	return res;
}

signed main(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
    build(1, 1, n);
	for(int i = 1; i <= m; i++){
		int num, x, y, k;
		cin >> num >> x >> y;
		if(num == 1){
			int k;
			cin >> k;
			multi_update(1, x, y, 1, n, k);
		} else {
			cout << query(1, x, y, 1, n) << endl;
		}
	}
	return 0;
}