#include<bits/stdc++.h>

using namespace std;

int main() {
	long long T;
	cin >> T;
	vector<long long> v(T);
	for (long long i = 0; i < T; ++i) { cin >> v[i]; }
	sort(v.begin(), v.end());
	long long max = 0, res;
	for (long long i = 0; i < T; i++) {
		res = (T - i) * v[i];
		if (res > max) { max = res; }
	}
	cout << max << endl;
	return 0;
}


