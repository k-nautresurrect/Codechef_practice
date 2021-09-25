#include<bits/stdc++.h>

using namespace std;
using ll = long long;

#define ln "\n";

void solve(){
    int n;  cin >> n;
    if(n%4 != 0){ cout << "NO" << ln;  return; }
    else{ cout << "YES" << ln; }
    vector<int> a,b;
    int x = 1, y = n;
    int stp = 1, chk = n/2;
    while(chk){
        if(stp == 1){
            a.push_back(x);  x++;
            stp = 0;
        }else{
            a.push_back(y);  y--;
            stp = 1;
        } chk--;
    }
    for(int i = x; i <= y; i++){ b.push_back(i); }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i:a){ cout << i <<" "; }
    cout << ln;
    for(int j: b){ cout << j << " "; }
    cout << ln;
}

int main(){
    int T;  cin >> T;
    while(T-- > 0){
        solve();
    }
	return 0;
}