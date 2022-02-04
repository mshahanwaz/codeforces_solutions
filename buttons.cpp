#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n; cin >> n;
	cout << (n * (n + 1) * (n - 1)) / 6 + n << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; // cin >> tc;
	while(tc--) solve();
	return 0;
}

