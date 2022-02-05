#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k; cin >> n >> k;
	int ans = n;
	for(int i = 1; i * i <= n; i++) {
		if(n % i == 0) {
			int a1 = 0, a2 = 0;
			if(i <= k) a1 = i;
			if((n / i) <= k) a2 = n / i;
			if(a1 || a2) ans = min(ans, n / max(a1, a2));
		} 
	}
	cout << ans << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; cin >> tc;
	while(tc--) solve();
	return 0;
}

