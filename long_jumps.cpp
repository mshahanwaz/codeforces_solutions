#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	vector<int> dp(n);
	for(int i = n - 1; i >= 0; i--) {
		dp[i] = a[i];
		int j = i + a[i];
		if(j < n) dp[i] += dp[j];
	}
	cout << *max_element(dp.begin(), dp.end()) << endl;;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; cin >> tc;
	while(tc--) solve();
	return 0;
}

