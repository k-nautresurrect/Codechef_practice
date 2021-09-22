#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;  cin >> T;
	while(T-- > 0){
		int a ,b ,c;  cin >> a >> b >> c;
		int x, y, z; cin >> x >> y >> z;
		int min = 240, p = 0;
		vector< pair<int,int> > awn = { {x,a}, {y,b}, {z,c} };
		
		sort(awn.rbegin(), awn.rend());

		p += awn[0].first * 20;
		min -= awn[0].second * 20;
		while(min > 0){
			for(int i = 0; i < 20; i++){
				if(min <= 0){ break; }
				else{
					p += awn[1].first;
					min -= awn[1].second;
				}
			}
			for(int i = 0; i < 20; i++){
				if(min <= 0){ break; }
				else{
					p += awn[2].first;
					min -= awn[2].second;
				}
			}
		}
		cout << p + min << "\n";
	}
	return 0;
}