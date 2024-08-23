#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e5+5;
struct segment_tree{
	int l, r, v;
	int dtag, ktag;
} t[4 * N];
int n, m;
int l, r, qp;
int k, d;
int a[N];
int opt;
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
        t[p].l = l;
        t[p].r = r;
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
    t[p].ktag += K;
    t[p].dtag += D;
    t[p].v += (K + (K + D * (t[p].r - t[p].l))) * (t[p].r - t[p].l + 1) / 2;
}
void pushdown(int p){
	addtag(ls(p), t[p].ktag, t[p].dtag);
    addtag(rs(p), t[p].ktag, t[p].dtag);
    t[p].ktag = t[p].dtag = 0;
}
void update(int ql, int qr, int p, int K, int D){
    if(ql <= t[p].l && t[p].r <= qr){
        addtag(p, K, D);
        return;
    }
    int mid = t[p].l + t[p].r >> 1;
    //addtag(p, K, D);
    pushdown(p);
    if(ql <= mid) update(ql, qr, ls(p), K, D);
    if(mid + 1 <= qr) update(ql, qr, rs(p), K, D);
    pushup(p);
}
int query(int ql, int qr, int p){
    if(ql <= t[p].l && t[p].r <= qr)
        return t[p].v;
    int res = 0;
    int mid = t[p].l + t[p].r >> 1;
    pushdown(p);
    if(mid + 1 <= qr) res += query(ql, qr, rs(p));
    if(ql <= mid) res += query(ql, qr, ls(p));
    return res;
}

signed main(){
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	//freopen("P1438_1.in", "r", stdin);
	cin >> n >> m;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
	build(1, n, 1);
    //cout << "%%%" << endl;
	for(int i = 1; i <= m; i++){
		cin >> opt;
		if(opt == 1){
            cin >> l >> r >> k >> d;
			update(l, r, 1, k, d);
        } else if(opt == 2){
            cin >> qp;
			cout << query(qp, qp, 1) << endl;
        }
	}
	return 0;
}