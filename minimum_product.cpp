#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long a, b, x, y, n;
	cin >> a >> b >> x >> y >> n;
	long long ans = 1e18;
	for(int i = 0; i < 2; i++) {
		long long da = min(n, a - x);
		long long db = min(n - da, b - y);
		ans = min(ans, (a - da) * 1ll * (b - db));
		swap(a, b);
		swap(x, y);
	}
	cout << ans << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	cin >> tc;
	while(tc--)
		solve();
	return 0;
}

