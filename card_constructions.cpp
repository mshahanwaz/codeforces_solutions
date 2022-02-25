#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO() cin.tie(0)->sync_with_stdio(0);

vector<ll> preC;

ll bs(ll n) {
	ll l = 0, r = (ll)preC.size() - 1;
	ll idx = 0;
	while (l <= r) {
		ll mid = l + (r - l) / 2;
		if (preC[mid] == n) return mid;
		else if (preC[mid] < n) {
			idx = mid;
			l = mid + 1;
		} else r = mid - 1;
	}
	return idx;
}

int main() {
    fastIO();
	for (ll i = 1, sum = 0; sum <= (ll)1e9; ++i) {
		preC.push_back(sum);
		sum = sum + (3 * i - 1);
	}
	ll TC = 1;
    cin >> TC;
	while (TC--) {
		ll n;
		cin >> n;
		ll p = bs(n), cnt = 0;
		while (n > 0 && p > 0) {
			n -= preC[p];
			p = bs(n);
			++cnt;
		}
		cout << cnt << endl;
    }
	return 0;
}

