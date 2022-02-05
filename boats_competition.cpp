#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> cnt(n + 1);
	for(int i = 0; i < n; i++) {
		int x; cin >> x;
		++cnt[x];
	}
	int ans = 0;
	for(int s = 2; s <= 2 * n; s++) {
		int curr = 0;
		for(int i = 1; i < (s + 1) / 2; i++) {
			if(s - i > n) continue;
			curr += min(cnt[i], cnt[s - i]);
		}
		if(s % 2 == 0) curr += cnt[s / 2] / 2;
		ans = max(ans, curr);
	}
	cout << ans << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; cin >> tc;
	while(tc--) solve();
	return 0;
}

