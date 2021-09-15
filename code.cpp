#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	if(n%5 == 0 || n%11 == 0){
		if(n%5 == 0 && n%11 == 0){
			cout << "BOTH";
		}else{
			cout << "ONE";
		}
	}
	else{
		cout << "NONE";
	}
	return 0;
}