#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long w, h; cin >> w >> h;
	long long res = 0;
	for(long long i = 0; i < 4; i++) {
		long long k; cin >> k;
		vector<long long> a(k);
		for(long long j = 0; j < k; j++) {
			cin >> a[j];
		}
		sort(a.begin(), a.end());
		if(i < 2) res = max(res, h * (a[k - 1] - a[0]));
		else res = max(res, w * (a[k - 1] - a[0]));
	}
	cout << res << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; cin >> tc;
	while(tc--) solve();
	return 0;
}

