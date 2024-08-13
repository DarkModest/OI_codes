#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e5+5;
int a[N];
int n, q, m;
int num, x, y, k;
struct tree{
	int l, r, data;
	int atag = 0, mtag = 1; //for multi update
    int sum = 0; //sum tag
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

void build(int p, int l, int r){
	if(l == r){
		t[p].data = a[l];
        return;
	}
    t[p].l = l;
    t[p].r = r;
	int mid = (l + r) >> 1;
	build(ls(p), l, mid);
	build(rs(p), mid + 1, r);
	pushup(p);
}

void pushdown(int p, int pl, int pr){ //lazy-tag下传
    int mid = (pr + pl) >> 1;
    //child_v = child_v * father_mtag + child_len * father_atag
    t[ls(p)].data = (t[ls(p)].data * t[p].mtag + (mid - pl + 1) * t[p].atag) % m;
    t[rs(p)].data = (t[rs(p)].data * t[p].mtag + (pr - mid) * t[p].atag) % m;
    //child_mtag = child_mtag * father_mtag
    //child_atag = child_atag * father_mtag + father_mtag
    t[ls(p)].mtag = (t[ls(p)].mtag * t[p].mtag) % m;
    t[rs(p)].mtag = (t[rs(p)].mtag * t[p].mtag) % m;
    t[ls(p)].atag = (t[ls(p)].atag * t[p].mtag + t[p].atag) % m;
    t[rs(p)].atag = (t[rs(p)].atag * t[p].mtag + t[p].atag) % m;
    t[p].atag = 0, t[p].mtag = 1;
}

void addtag(int p, int pl, int pr, int v){
    t[p].atag += v;
    t[p].data = (t[p].data + v * (pr - pl + 1)) % m;
}

void multag(int p, int pl, int pr, int v){ //给[pl, pr] 打上 lazy-tag += v 
    t[p].atag = (t[p].atag * v) % m;
    t[p].mtag = (t[p].mtag * v) % m;
    t[p].data = (t[p].data * v) % m;
}


void update(int p, int ql, int qr, int pl, int pr, int v, int type){ //区间更改 
    if(ql <= pl && pr <= qr){
        if(type == 1){
            multag(p, pl, pr, v);
        }
        if(type == 2){
            addtag(p, pl, pr, v);
        }
        return;
    }
    pushdown(p, pl, pr);
    int mid = (pl + pr) >> 1;
    if(ql <= mid) update(ls(p), ql, qr, pl, mid, v, type);
    if(mid + 1<= qr) update(rs(p), ql, qr, mid + 1, pr, v, type);
    pushup(p);
}
//----
int query(int p, int ql, int qr, int pl, int pr){ //查询[ql ,qr] 单点查询则ql = qr = x 
	if(pl >= ql && qr >= pr) return t[p].data;
    pushdown(p, pl, pr);
	int res = 0;
	int mid = (pl + pr) >> 1;
	if(ql <= mid) res += query(ls(p), ql, qr, pl, mid) % m;
	if(mid + 1 <= qr) res += query(rs(p), ql, qr, mid + 1, pr) % m;
	return res % m;
}

signed main(){
	cin >> n >> q >> m;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
    build(1, 1, n);
	for(int i = 1; i <= q; i++){
		cin >> num >> x >> y;
		if(num == 1 || num == 2){
            cin >> k;
            update(1, x, y, 1, n, k, num);
        }
        if(num == 3){
			cout << query(1, x, y, 1, n) << endl;
		}
	}
	return 0;
}