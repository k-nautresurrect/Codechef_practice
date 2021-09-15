#include<bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c; cin >> a >> b >> c;
	int s = (a+b+c)/2;
	if(s<a || s<b || s<c){ cout << "NO"; }
	else{ cout << "YES"; }
	return 0;
}