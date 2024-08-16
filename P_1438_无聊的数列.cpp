#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e5+5;
struct segment_tree{
	int l, r, v;
	int atag;
} t[4 * N];
int n, m;
int l, r, p;
int k, d;
int ls(int p){
	return p << 1;
}
int rs(int p){
	return p << 1 | 1;
}
void pushup(int p){
	t[p].v = t[ls(p)].v + t[rs(p)].v;
}
void build(int l, int r, int p){
    if(l == r){
        t[p].v = a[l];
        return;
    }
    t[p].l = l;
    t[p].r = r;
    int mid = l + r >> 1;
    build(l, mid, ls(p));
    build(mid + 1, r, rs(p));
    pushup(p);
}
void addtag(int p, int K, int D){
    
}
void pushdown(int p){
	int mid = t[p].l + t[p].r >> 1;
}
void update(int ql, int qr, int p, int K, int D){
    if(ql <= t[p].l && t[p].r <= qr){
        addtag(p, K, D);
        return;
    }
    int mid = t[p].l + t[p].r >> 1;
    if(ql <= mid) update(ql, qr, ls(p));
    if(mid + 1 <= qr) update(ql, qr, rs(p));
    pushup(p);
}
int query(int ql, int qr, int p){
    if(ql <= t[p].l && t[p].r <= qr)
        return t[p].v;
    int res = 0;
    pushdown(p);
    int mid = t[p].l + t[p].r >> 1;
    if(ql <= mid) res += query(ql, qr, ls(p));
    if(mid + 1 <= qr) res += query(ql, qr, rs(p));
    return res;
}

signed main(){
	//ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	
	cin >> n >> m;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
	build(1, n, 1);
	for(int i = 1; i <= m; i++){
		cin >> c;
		if(c == 1){
            cin >> l >> r >> K >> D;
            int ld = K;
			update(l, r, 1, k, d);
        } else  {
            cin >> p;
			cout << query(p, p, 1) << endl;
        }
	}
	return 0;
}
