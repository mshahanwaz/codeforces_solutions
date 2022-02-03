#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long a, b; cin >> a >> b;
	cout << min({a, b, (a + b) / 3}) << endl; 
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; cin >> tc;
	while(tc--) solve();
	return 0;
}

