#include<bits/stdc++.h>
using namespace std;

string s, t;
vector<string> v;
char minn;
int main(){
    cin >> s >> t;
    for(int i = 0; i < s.length(); i++){
        for(int j = i; j < s.length(); j++){
            if(s[j] > t[j]){
                s[j] = t[j];
                v.push_back(s);
            }
        }
    }
    for(int i = s.length() - 1; i >= 0; i--){
        for(int j = i; j >= 0; j--){
            if(s[j] < t[j]){
                s[j] = t[j];
                v.push_back(s);
            }
        }
    }
    //sort(v.begin(), v.end());
    cout << v.size() << endl;
    for(auto i : v) cout << i << endl;
    
    return 0;
}
/*
afwgebrw
oarbrenq

8
aawgebrw
aargebrw
aarbebrw
aarbebnw
aarbebnq
aarbeenq
aarbrenq
oarbrenq

*/