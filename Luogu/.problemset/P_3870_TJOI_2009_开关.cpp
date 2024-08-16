#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e5+5;
struct segment_tree{
	int l, r, v;
	int ftag;
} t[10 * N];
int n, m;
int c, a, b;
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
	t[p].v = 0;
	t[p].l = l;
	t[p].r = r;
    t[p].ftag = 0;
    if(l == r) return;
    int mid = ((l + r) >> 1);
	build(l, mid, ls(p));
	build(mid + 1, r, rs(p));
}

void fliptag(int p){
	t[p].v = (t[p].r - t[p].l + 1) - t[p].v;
	t[p].ftag ^= 1;
}

void pushdown(int p){
	if(t[p].ftag){
		fliptag(ls(p));
		fliptag(rs(p));
		t[p].ftag = 0;
	}
}
void update(int ql, int qr, int p){
	if(ql <= t[p].l && t[p].r <= qr){
		fliptag(p);
		return;
	}
	int mid = ((t[p].l + t[p].r) >> 1);
	pushdown(p);
	if(ql <= mid) update(ql, qr, ls(p));
	if(mid + 1 <= qr) update(ql, qr, rs(p));
	pushup(p);
}
int query(int ql, int qr, int p){
	//cout << 1 << endl;
	if(ql <= t[p].l && t[p].r <= qr)
		return t[p].v;
	int mid = ((t[p].l + t[p].r) >> 1);
	int res = 0;
	pushdown(p);
	if(ql <= mid) res += query(ql, qr, ls(p));
	if(mid + 1 <= qr) res += query(ql, qr, rs(p));
    return res;
}
signed main(){
	//ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	
	cin >> n >> m;
	build(1, n, 1);
	for(int i = 1; i <= m; i++){
		cin >> c >> a >> b;
		if(c == 0)
			update(a, b, 1);
		else    
			cout << query(a, b, 1) << endl;
	}
	return 0;
}
