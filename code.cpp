#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, val = 1;  cin >> n;
	for(int row = 1; row <= n; row++){
		if(row%2 != 0){
			for(int col = 1; col <= 5; col++){
				cout << val << " ";   val++;
			}
			val = val - 1;
		}
		if(row%2 == 0){
			val = val + 5;
			for(int col = 1; col <= 5; col++){
				cout << val << " ";  val--;
			}
			val = val + 6;
		}
		cout << "\n";
	}
	return 0;
}