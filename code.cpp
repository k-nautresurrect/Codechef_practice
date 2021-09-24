#include<bits/stdc++.h>

using namespace std;


int main(){
    int T;  cin >> T;
    while(T-- > 0){
        int n;  cin >> n;  
        int i = 0, dgt[to_string(n).length()], cnt = 0, no = 0, mul = 10;
        while(n != 0){
            dgt[i] = n%10;
            cnt ++;
            i++;
            n = n/10;
        }
        for(i = 0; i < sizeof(dgt)/sizeof(dgt[0]); i++){
            no += dgt[i] * pow(10,cnt-1);
            cnt--;
        }
        cout << no << "\n";
    }
	return 0;
}