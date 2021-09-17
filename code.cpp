#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n, sumev = 0, sumod = 0; cin >> n;
	while(n > 0){
		sumev += 2*n;
		sumod += (2 * n) -1;
		n--;
	}
	cout << sumod << " " << sumev;
	return 0;
}