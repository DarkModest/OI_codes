#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e5+5;
int n, pp, a[N], m, op, tt, g, c;
struct segment_tree{
    int l, r, v, size;
    int mtag = 1, atag;
} t[N * 4];

int ls(int p){
    return (p << 1);
}
int rs(int p){
    return (p << 1 | 1);
}
void pushup(int p){
    t[p].v = (t[ls(p)].v + t[rs(p)].v) % pp;
}
void build(int p, int l, int r){
    t[p].l = l;
    t[p].r = r;
    t[p].size = r - l + 1;
    if(l == r){
        t[p].v = a[l];
        return;
    }
    int mid = l + r >> 1;
    build(ls(p), l, mid);
    build(rs(p), mid + 1, r);
    pushup(p);
}
void addtag(int p, int v){
    t[p].atag = (t[p].atag + v) % pp;
    t[p].v = (t[p].v + t[p].size * v) % pp;
}
void multag(int p, int v){
    t[p].atag = (t[p].atag * v) % pp;
    t[p].mtag = (t[p].mtag * v) % pp;
    t[p].v = (t[p].v * v) % pp;
}
void pushdown(int p){ //lazy-tag下传
    //child_v = child_v * father_mtag + child_len * father_atag
    t[ls(p)].v = (t[ls(p)].v * t[p].mtag + t[ls(p)].size * t[p].atag) % pp;
    t[rs(p)].v = (t[rs(p)].v * t[p].mtag + t[rs(p)].size * t[p].atag) % pp;
    //child_mtag = child_mtag * father_mtag
    //child_atag = child_atag * father_mtag + father_mtag
    t[ls(p)].mtag = (t[ls(p)].mtag * t[p].mtag) % pp;
    t[rs(p)].mtag = (t[rs(p)].mtag * t[p].mtag) % pp;
    t[ls(p)].atag = (t[ls(p)].atag * t[p].mtag + t[p].atag) % pp;
    t[rs(p)].atag = (t[rs(p)].atag * t[p].mtag + t[p].atag) % pp;
    t[p].atag = 0, t[p].mtag = 1;
}
void update(int p, int ql, int qr, int v, int op){
    if(ql <= t[p].l && t[p].r <= qr){
        if(op == 1) multag(p, v);
        if(op == 2) addtag(p, v);
        return;
    }
    pushdown(p);
    int mid = t[p].l + t[p].r >> 1;
    if(ql <= mid) update(ls(p), ql, qr, v, op);
    if(mid + 1 <= qr) update(rs(p), ql, qr, v, op);
    pushup(p);
}
int query(int p, int ql, int qr){
    if(t[p].l >= ql && qr >= t[p].r)
        return t[p].v;
    pushdown(p);
    int res = 0;
    int mid = t[p].l + t[p].r >> 1;
    if(ql <= mid) res += query(ls(p), ql, qr) % pp;
    if(mid + 1 <= qr) res += query(rs(p), ql, qr) % pp;
    return res % pp;
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> pp;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    build(1, 1, n);
    cin >> m;
    for(int i = 1; i <= m; i++){
        cin >> op >> tt >> g;
        if(op <= 2){
            cin >> c;
            update(1, tt, g, c, op);
        } else 
            cout << query(1, tt, g) % pp << endl;
    }
    return 0;
}