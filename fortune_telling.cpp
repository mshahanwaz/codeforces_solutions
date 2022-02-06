#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n, x, y; cin >> n >> x >> y;
	int tmp = x;
	for(int i = 0; i < n; i++) {
		long long t; cin >> t;
		tmp ^= t;
	}
	if(tmp % 2 == y % 2) cout << "Alice\n";
	else cout << "Bob\n";
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; cin >> tc;
	while(tc--) solve();
	return 0;
}

