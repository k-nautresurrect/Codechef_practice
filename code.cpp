#include<bits/stdc++.h>

using namespace std;
using ll = long long;
#define pb push_back

int main(){
	int T;  cin >> T;
	while(T-- > 0){
	    ll n, k;  cin >> n >> k;
        string s; cin >> s;
        vector <int>v;
        vector <int>cnt(2*n,0);
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1'){
            	v.pb(i);  cnt[i]++;
            }
        }
        int ans=0;
        for(int i = 0; i < v.size() ; i++)
        {
            if(v[i]-k>=0 && cnt[v[i]-k]){ continue; }
            if(cnt[v[i]+k]){ continue; }
            
            ++ans;
            ++cnt[v[i]+k];
        }
        cout<<ans<<"\n";
    }

	return 0;
}