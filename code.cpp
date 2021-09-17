#include<bits/stdc++.h>

using namespace std;

int main(){
	int T; cin >> T;
	while(T-- > 0){
		int x; cin >> x;
		int cnt = 0, i = x;
		while(i>0){
			if(cnt >= 3 || i == 0){
				cnt = 0;
			}else{ cnt++; }
			i--;
		}
		if(cnt == 0){ cout << "North" << endl; }
		else if(cnt == 1){ cout << "East" << endl; }
		else if(cnt == 2){ cout << "South" << endl; }
		else if(cnt == 3){ cout << "West" << endl; }
	}
	return 0;
}