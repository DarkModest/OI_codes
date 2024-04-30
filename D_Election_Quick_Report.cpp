#include <bits/stdc++.h>
using namespace std;
#define int long long

string s;
int sc[15] = {0};
int ans = 0;
int isQuan[15] = {0};
int isBu = 0;

int spe(bool x, int y, int z, int i, string s){
	if(i > 1){
		if(x == 1){
			sc[i - 1] += s[0] - 48;
			if(s[0] == '/') sc[i - 1] -= '/' + 10;
			x = 0;
		}
		
		if(y == 1){
			if(sc[i] < 10) sc[i - 2] += s[0];
			if(s[0] == '/') sc[i - 2] += 10;
			y = 0;
		}
		if(z == 2){
			if(sc[i] < 10){
				sc[i - 1] += sc[i];
				z = 0;
			}
			if(s[0] == '/'){
				sc[i - 1] += 10;
				z -= 1;
			}
		}
	}
	return x, y, z;
}


int sco(string s, int i){
	if(s[0] == '/'){
		sc[i] += 10;
		isQuan[i] ++;
	} else if(s[1] == '/'){
		sc[i] += 10;
		isBu = 1;
	} else { //default
		sc[i] = sc[i] + s[0] + s[1] - 96;
	}
}

signed main(){

	
	for(int i = 1; i <= 10; i++){
		cin >> s;
		
		spe(isBu, isQuan[i - 2], isQuan[i - 1], i, s);
		
		sco(s, i);
		
		
		//i = 10 spe 
		if(i == 10){
			if(s[0] == '/'){
				cin >> s;
				sco(s, 10);
				if(s[0] == '/'){
					cin >> s;
					sco(s, 10);
				}
			} else if(s[1] == '/'){
				sc[10] += 10;
			} else {
				sc[10] = sc[10] + s[0] + s[1] - 96;
			}
		}
		
	}
	
	
	
	for(int i = 1; i <= 10; i++){
		ans += sc[i];
	}
	cout << ans << endl;
}
