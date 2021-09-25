#include<bits/stdc++.h>

using namespace std;
#define ln "\n";

int main(){
    int T;  cin >> T;
    while(T-- > 0){
       int n, a, b, c;  cin >> n >> a >> b >> c;
       int cnt = 0;
       if(a + c < n){ cout << "NO" << ln; }
       else{

        if(b >= a){ cnt += b-a; b = b-a; }
        else{ cnt += b; b = 0; }

        if(b >= c){ cnt += c; }
        else{ cnt += b; }
        
        if(cnt >=n){ cout << "YES" << ln; }
        else{ cout << "NO" << ln; }
       }
    }
	return 0;
}