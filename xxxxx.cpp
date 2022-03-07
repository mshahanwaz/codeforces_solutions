#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO cin.tie(0)->sync_with_stdio(0)

int main() {
	fastIO;
	int TC = 1;
	cin >> TC;
	while (TC--) {
		ll n, x;
		cin >> n >> x;
		ll sum = 0, l = -1, r;
		for (int i = 0; i < n; ++i) {
			ll t; cin >> t;
			if (t % x) {
				if (l == -1) l = i;
				r = i;
			}
			sum += t;
		}
		ll ans = 0;
		if (sum % x) ans = n;
		else if (l == -1) ans = -1;
		else ans = n - min(l + 1, n - r);
		cout << ans << endl;
	}
	return 0;
}
