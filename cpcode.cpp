// ॐ

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;


// names
#define ll  				long long
#define ld  				long double
#define w(x)				int x;  cin >> x;  while(x--)
#define mod  				1000000007
#define inf  				1e18
#define ln  				"\n"

// containers
#define ff  				first
#define ss  				second
#define pb  				push_back
#define mp  				make_pair
#define pii  				pair<int,int>
#define pll  				pair<ll,ll>
#define vi  				vector<int>
#define mii  				map<int,int>
#define pbp  				priority_queue<int>
#define pbs  				priority_queue<int,vi,greater<int> >
#define ps(x,y)  			fixed << setprecision(y) << x
#define mk(arr, n, type)	type *arr=new type[n];
#define lb  				lower_bound
#define ub  				upper_bound
#define sz(x)  				int((x).size())
#define all(v)  			v.begin(), v.end();
#define vpii 				vector<pii>

// bits-operation
#define setbits(x)  		__builtin_popcountll(x)
#define zrobits(x)  		__builtin_ctzll(x)


//for loops
#define FOR(i, a, b)  		for(int i = (a), i < (b), ++i)
#define ROF(i, a, b)  		for(int i = (b)-1; i >= (a); --i)

// random
mt19937  					rng(chrono::steady_clock::now().time_since_epoch().count());

// pbds
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void k_n_s() {
	ios_base::sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
	w(t) {
		cout << t << ln;
	}
}

int main() {
	k_n_s();
	return 0;
}
