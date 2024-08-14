#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e6+5;

int n, q;
int a[N];
int op, l, r, x;
struct tree{
    int l, r, data = 0;
    int atag = 0, ctag = -1;
    int mx = -1145141919810;
}t[4 * N];

int ls(int p){
    return p << 1;
}
int rs(int p){
    return p << 1 | 1;
}

void pushup(int p){
    t[p].mx = max(t[ls(p)].mx, t[rs(p)].mx);
}

void build(int l, int r, int p){
    t[p].l = l;
    t[p].r = r;
    //cout << 1 << endl;
    if(l == r){
        t[p].mx = a[l];
        return;
    }
    int mid = (l + r) >> 1;
    build(l, mid, ls(p));
    build(mid + 1, r, rs(p));
    pushup(p);
}
void settag(int p, int v){
    t[p].atag = 0;
    t[p].ctag = v;
     t[p].data = (t[p].r - t[p].l + 1) * v;
    t[p].mx = v;
}

void addtag(int p, int v){
    t[p].atag += v;
    t[p].data += (t[p].r - t[p].l + 1) * v;
    t[p].mx += v;
}
void pushdown(int p){
    int mid = (t[p].l + t[p].r) >> 1;
    if(t[p].ctag != -1){
        settag(ls(p), t[p].ctag);
        settag(rs(p), t[p].ctag);
        t[p].ctag = -1;
    }
    if(t[p].atag){
        addtag(ls(p), t[p].atag);
        addtag(rs(p), t[p].atag);
        t[p].atag = 0;
    }
    pushup(p);
}

void update(int ql, int qr, int p, int v, int op){
    //cout << 2 << endl;
    if(ql <= t[p].l && t[p].r <= qr){
        if(op == 1){
            settag(p, v);
        } else if(op == 2){
            addtag(p, v);
        }
        return;
    }
    pushdown(p);
    int mid = (t[p].l + t[p].r) >> 1;
    if(ql <= mid) update(ql, qr, ls(p), v, op);
    if(mid + 1 <= qr) update(ql, qr, rs(p), v, op);
    pushup(p);
    return;
}

int query(int ql, int qr, int p){
    //cout << 3 << endl;
    if(ql <= t[p].l && t[p].r <= qr) return t[p].mx;
    int res = -1145141919810;
    int mid = (t[p].l + t[p].r) >> 1;
    pushdown(p);
    if(ql <= mid) res = max(res, query(ql, qr, ls(p)));
    if(mid + 1 <= qr) res = max(res, query(ql, qr, rs(p)));
    pushup(p);
    return res;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n >> q;
    for(int i = 1; i <= n; i++) cin >> a[i];
    //cout << "start build" << endl;
    build(1, n, 1);
    //cout << 111 << endl;
    while(q--){
        cin >> op;
        if(op == 3){
            cin >> l >> r;
            cout << query(l, r, 1) << endl;
        } else {
            cin >> l >> r >> x;
            update(l, r, 1, x, op);
        }
    }
    return 0;
}

/*
6 6 4 5 1 4
6 6 6 7 1 4
q1 = 25
q2 = 12
-1 -1 -1 -1 -1 -1
*/