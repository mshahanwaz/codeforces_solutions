#include <bits/stdc++.h>

#define endl '\n'
#define fastIO() cin.tie(0)->sync_with_stdio(0);

using namespace std;
using ll = long long;

int main() {
    fastIO();
	int tc = 1;
    cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		vector<ll> a(n);
		for (auto &x: a)
			cin >> x;
		vector<ll> g(a.begin(), a.end() + 2);
		for (int i = 0; i < n; ++i) {
			g[i % 2] = __gcd(g[i % 2], a[i]);
		}
		vector<bool> good(2, true);
		for (int i = 0; i < n; ++i) {
			good[i % 2] = good[i % 2] && (a[i] % g[(i % 2) ^ 1] > 0);
		}
		ll ans = 0;
		for (int i = 0; i < 2; ++i) {
			if (good[i]) {
				ans = max(ans, g[i ^ 1]);
			}
		}
		cout << ans << endl;
	}
	return 0;
}

