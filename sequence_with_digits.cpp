#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl '\n'

ll getAdd(ll x) {
	ll m1 = 10, m2 = 0;
	while (x) {
		ll y = x % 10;
		x /= 10;
		m1 = min(m1, y);
		m2 = max(m2, y);
	}
	return m1 * m2;
}

int main() {
	cin.tie(0);
	int TC = 1;
	cin >> TC;
	while (TC--) {
		ll a1, k;
		cin >> a1 >> k;
		--k;
		while (k--) {
			ll y = getAdd(a1);
			if (!y) break;
			a1 += y;
		}
		cout << a1 << endl;
	}
	return 0;
}
