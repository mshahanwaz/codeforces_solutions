#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, l; cin >> n >> l;
	vector<int> a(n);
	for(int &x: a) cin >> x;
	double mx = -1.0;
	sort(a.begin(), a.end());
	mx = max(a[0], l - a[n - 1]);
	for(int i = 1; i < n; i++) {
		double dis = (a[i] - a[i - 1]) / 2.0;
		if(mx < dis) mx = dis;
	}
	cout << mx << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	cout << setprecision(9) << fixed;
	int tc = 1; // cin >> tc;
	while(tc--) solve();
	return 0;
}

