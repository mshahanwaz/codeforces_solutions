#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	if(n == 1) {
		cout << -1 << endl;
		return;
	}
	cout << 2;
	for(int i = 0; i < n - 1; i++) cout << 3;
	cout << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; cin >> tc;
	while(tc--) solve();
	return 0;
}

