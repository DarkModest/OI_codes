#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int solve(string s1, string s2){
	int dp[200005],tmp,old;
	unsigned len1, len2, i, j;
		len1 = s1.size();
		len2 = s2.size();
		for (i = 0; i <= len2; i++)dp[i] = 0;
		for (i = 1; i <= len1; i++)
		{
			old = dp[0];
			for (j = 1; j <= len2; j++)
			{
				tmp = dp[j];
				if (s1[i - 1] == s2[j - 1])
					dp[j] = old + 1;
				else
					dp[j] = max(dp[j - 1], dp[j]);
				old = tmp;
			}
		}
		return dp[len2];
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int cases;
    cin >> cases;
    for(int ii = 1; ii <= cases; ii++){
        int n, q;
        string a, b;
        cin >> n >> q;
        cin >> a >> b;
        for(int i = 1; i <= q; i++){
            int l, r;
            cin >> l >> r;
            l--, r--;
            string x = a.substr(l, r - l + 1);
            string y = b.substr(l, r - l + 1);
            sort(x.begin(), x.end());
            sort(y.begin(), y.end());
            int len = x.length();
            cout << len - solve(x, y) << endl;
        }
    }
    return 0;
}