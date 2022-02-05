#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	for(int &x: a) cin >> x;
	sort(a.begin(), a.end());
	for(int i = n - 1; i >= 0; i--) {
		if(a[i] <= i + 1) {
			cout << i + 2 << endl;
			return;
		}
	}
	cout << 1 << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; cin >> tc;
	while(tc--) solve();
	return 0;
}

