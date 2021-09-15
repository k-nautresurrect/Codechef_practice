#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin>>n;
	int fac[n] = {0}, cnt = 0;
	for(int i = 1; i<=n; i++){
		if(n%i == 0){
			fac[i] = i;
			cnt++;
		}
	}
	cout << cnt << "\n";
	for(int i = 1; i<=n; i++){
		if(fac[i] != 0){
			if(i != n){
				cout << fac[i] << " ";
			}else{
				cout << fac[i];
			}
		}
	}

	return 0;
}