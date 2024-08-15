#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int M = 2e6+5;
const int N = 1e5+5;
struct edge{
    int next, to;
}e[M];
int head[N];
int n, m;
int u, v;
int low[N], dfn[N];
stack<int> s;
int in_stack[N];
int cnt, dfnclock;
vector<int> dcc[N];
int dcccnt;
int belong[N]; //点u从属于第belong[u]个强连通分量
int isprinted[N];
void add(int u, int v){
    e[++cnt].next = head[u];
    e[cnt].to = v;
    head[u] = cnt;
}

void tarjan(int u){
    low[u] = dfn[u] = ++dfnclock;
    in_stack[u] = 1;
    s.push(u);
    for(int i = head[u]; i; i = e[i].next){
        int v = e[i].to;
        if(!dfn[v]){
            tarjan(v);
            low[u] = min(low[u], low[v]);
        } else if(in_stack[v]){
            low[u] = min(low[u], dfn[v]);
        }
    }
    if(dfn[u] == low[u]){
        dcccnt++;
        dcc[dcccnt].push_back(u);
        while(s.top() != u){
            belong[s.top()] = dcccnt;
            in_stack[s.top()] = 0;
            dcc[dcccnt].push_back(s.top());
            s.pop();
        }
        s.pop();
        in_stack[u] = 0;
        belong[u] = dcccnt;
    }
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        cin >> u >> v;
        add(u, v);
    }
    for(int i = 1; i <= n; i++)
        if(!dfn[i]) tarjan(i);
    for(int i = 1; i <= dcccnt; i++)
        sort(dcc[i].begin(), dcc[i].end());
    cout << dcccnt << endl;
    for(int i = 1; i <= n; i++){
        if(isprinted[belong[i]]) continue;
        isprinted[belong[i]] = 1;
        for(auto j : dcc[belong[i]])
            cout << j << " ";
        cout << endl;
    }
    return 0;
}