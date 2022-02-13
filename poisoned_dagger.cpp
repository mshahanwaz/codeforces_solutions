#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO() cin.tie(0)->sync_with_stdio(0);

int main() {
    fastIO();
	int tc = 1;
    cin >> tc;
	while (tc--) {
		ll n, h;
		cin >> n >> h;
		vector<ll> a(n);
		for (auto &x: a)
			cin >> x;
		ll l = 1, r = 1e18;
		while (l <= r) {
			ll mid = l + (r - l) / 2;
			ll sum = mid;
			for (ll i = 0; i < n - 1; ++i) {
				sum += min(mid, a[i + 1] - a[i]);
			}
			if (sum < h) l = mid + 1;
			else r = mid - 1;
		}
		cout << r + 1 << endl;
    }
	return 0;
}

