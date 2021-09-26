#include<bits/stdc++.h>

using namespace std;
using ll = long long;

#define ln "\n";

void solve(){
 string s;  cin >> s;
 int a = 0, j =0;
 for(int i = 0; i < s.size(); i++){
    if(s[i] == '0'){
        for(j = i; j < s.size(); j++){
            if(s[j] == '1'){ break; }
        }
        a++;
        i = j;
    }
 }
 if(s[s.size() - 1] == '0'){ cout << (2 * a) -1 << ln; }
 else{ cout << (2 * a) << ln; }
}

int main(){
    int T;  cin >> T;
    while(T-- > 0){
        solve();
    }
	return 0;
}