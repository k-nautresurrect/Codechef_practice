#include<bits/stdc++.h>

using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int n;  cin >> n;
		long double sum = 0;
		for (int i = 1; i <= n; i++) {
			sum += log(i);
		}
		string res = to_string(round(exp(sum)));
		int indx = res.find('.');
		string result = res.substr(0, indx);
		cout << result << "\n";
	}
	return 0;
}

