#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n, k; cin >> n >> k;
	long long tmp = (n + k - 1) / k;
	long long ans = (n - 1 + k * tmp) / n;
	cout << ans << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; cin >> tc;
	while(tc--) solve();
	return 0;
}

