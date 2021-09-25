#include<bits/stdc++.h>

using namespace std;
#define ln "\n";

int main(){
    int T;  cin >> T;
    while(T-- > 0){
        int d,l,r;  cin >> d >> l >> r;
        if(d >= l && d <= r){ cout << "Take second dose now" << ln; }
        else if(d >= r){ cout << "Too Late" << ln; }
        else{ cout << "Too Early" << ln; }
    }
	return 0;
}