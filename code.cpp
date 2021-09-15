#include<bits/stdc++.h>

using namespace std;

int main(){
	int i,n,k; cin >> n >> k;
	int arr[n-1];
	for(i = 0; i<n; i++){
		cin >> arr[i];
		if(arr[i] == k){ cout << 1; break; }
	}
	if(i >= n){ cout << -1; }
	return 0;
}