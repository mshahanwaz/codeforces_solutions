#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k; cin >> n >> k;
	vector<int> a(n);
	for(int &x: a) cin >> x;
	if(n <= k) {
		cout << a[n - 1] << endl;
		return;
	}
	int ans = a[n - 1];
	int cnt = n - k;
	for(int i = cnt - 1; cnt < n && i >= 0; i--) {
		ans = max(ans, a[i] + a[cnt++]);
	}
	cout << ans << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; // cin >> tc;
	while(tc--) solve();
	return 0;
}

