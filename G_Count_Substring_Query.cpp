#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

string s;
int n;
int nx[500005];
void getnx()
{
    int len = s.size();
    nx[1]=0;
    for(int i=2,j=1;i<=len;)
    {
        nx[i]=j;
        while(j&&s[j]!=s[i])j=nx[j];
        j++,i++;
    }
}

int KMP(string s, string t)	//这个函数是从s中找到t，如果存在返回t出现的位置，如果不存在返回-1
{
	if(t.size()==0)	return 0;
	int j = 0;
	for(int i = 0; i < s.size(); i++){
		while(j>0&&s[i]!= t[j])	j = nx[j-1];	
		if(s[i]==t[j])	j++;
		if(j==t.size())	return i - t.size() + 1;
	}
	return -1;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


    cin >> s >> n;
    getnx();
    for(int i = 1; i <= n; i++){
        string s2;
        int cnt = 0;
        cin >> s2;
        if(KMP(s, s2)) cnt++;
        cout << cnt << endl;
    }
    return 0;
}