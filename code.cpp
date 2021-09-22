#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;  cin >> T;
	while(T-- > 0){
		int n; cin >> n;
		if(n == 1){ cout << 3 << "\n"; }
		else if(n == 2){ cout << 33 << "\n"; }
		else{
			char s = '0';
			int mul = (n-2);
			cout << 3 << string(mul, s) << 3 << "\n";
		}
	}
	return 0;
}