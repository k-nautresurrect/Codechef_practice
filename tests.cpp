#include<bits/stdc++.h>

using namespace std;

using ll  = long long;
using db = long double; //make it double if TL is tight.
using str = string;

//pairs
using pi = pair<int,int>;
using pl = pair<long,long>;
using pd = pair<db,db>;
#define mp make_pair;
#define fi first
#define se second

//vector
using vi = vector<int>;
using vl = vector<ll>;
using vb = vector<bool>;
using vd = vector<double>;
using vs = vector<str>;
using vpi = vector<pi>;
using vpl = vector<pl>;
using vpd = vector<pd>;
#define sz(x) int((x).size())
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define rall(x) x.rbegin(), x.rend()
#define rsz resize
#define pb push_back
#define eb emplace_back
#define ft front()
#define bk back()
#define lb lower_bound
#define ub upper_bound

//loops
#define FOR(i,a,b) for(int i = (a); i < (b); ++i)
#define FOR(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define ROF(i,a) ROF(i,0,a)
#define rep(a) FOR(_,a)
#define each(a,x) for(auto& a:x)

#define fast_cin() ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL)
#define ln "\n"


void solve(){

}

int main(){
	fast_cin();
	ll T;
	cin >> T;
	for(int tst = 1; tst <= T; tst++){
		solve();
	}
	return 0;
}