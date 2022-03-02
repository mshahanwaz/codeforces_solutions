#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int TC;
	cin >> TC;
	while (TC--) {
		ll a, b, c;
		cin >> a >> b >> c;
		cout << (a < c ? 1 : -1) << ' ';
		cout << (c < a * b ? b : -1) << endl;
	}
	return 0;
}
