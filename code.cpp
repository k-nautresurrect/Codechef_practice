#include<bits/stdc++.h>

using namespace std;

int main(){
	long long a,b,c; cin >> a >> b >> c;
	long long ab, ac, ba, bc, ca, cb;
	ab = a-b; ac = a-c;
	ba = b-a; bc = b-c;
	ca = c-a; cb = c-b;
	if(ab*ac < 0){ cout << a; }
	else if(ba*bc < 0){ cout << b; }
	else{ cout << c; }
	return 0;
}