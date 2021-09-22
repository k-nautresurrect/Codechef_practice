#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;  cin >> T;
	while(T-- > 0){
		int day[7], cntr = 0, cnts = 0;
		for(int i = 0; i < 7; i++){
			cin >> day[i];
			if(day[i] == 0){ cntr++; }
			if(day[i] == 1){ cnts++; }
		}
		if(cnts > cntr){ cout << "YES" << "\n"; }
		if(cntr > cnts){ cout << "NO" << "\n"; }
	}
	return 0;
}