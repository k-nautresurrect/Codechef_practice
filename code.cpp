#include<bits/stdc++.h>

using namespace std;
using ll = long long;

#define ln "\n";

void solve(){
    int n,p,x,y;  cin >> n >> p >> x >> y;
    int arr[n];
    for(int i = 0; i < n; i++){ cin >> arr[i]; }
    int cnt = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == 1){ cnt += y; }
        if(arr[i] == 0){ cnt += x; }
        if((i+1) == p){ break; }
    }  cout << cnt << ln;
}

int main(){
    int T;  cin >> T;
    while(T-- > 0){
        solve();
    }
	return 0;
}