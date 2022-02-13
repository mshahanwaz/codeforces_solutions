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
		ll n;
		cin >> n;
		vector<pair<ll, ll>> a(n);
		for (ll i = 0; i < n; ++i) {
			cin >> a[i].first;
			a[i].second = i + 1;
		}
		ll res = 0;
		sort(a.rbegin(), a.rend());
		ll curr = 1;
		vector<ll> ans(n + 1);
		for (ll i = 0; i < n; ++i) {
			res += 2 * abs(curr) * a[i].first;
			ans[a[i].second] = curr;
			if (curr > 0) curr *= -1;
			else curr = abs(curr) + 1;
		}
		cout << res << endl;
		for (auto x: ans) {
			cout << x << ' ';
		}
		cout << endl;
    }
	return 0;
}

