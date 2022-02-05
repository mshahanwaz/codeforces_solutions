#include <bits/stdc++.h>
using namespace std;

void solve() {
	long a, b, n, S;
	cin >> a >> b >> n >> S;
	long q = S / n;
	if(q > a) q = a, S -= a * n;
	else S -= q * n;
	if(S <= b) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; cin >> tc;
	while(tc--) solve();
	return 0;
}

