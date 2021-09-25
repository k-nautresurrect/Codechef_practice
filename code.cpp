#include<bits/stdc++.h>

using namespace std;
using ll = long long;
#define ln "\n";


int main(){
    int T;  cin >> T;
    while(T-- > 0){
        ll l,r;  cin >> l >> r;
        for(int i = 0; i<3; i++){
            if(l>r){ break; }
            if(l<=r && l%3 == 0){ break; }
            else{ l++; }
        }

        for(int i = 0; i < 3; i++){
            if(l <= r && r%3 ==0){ break; }
            else{ r--; }
        }

        ll a = (l / 3), b = (r / 3);
        cout << abs(a-b)+1 << ln;
    }
	return 0;
}