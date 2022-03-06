#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO cin.tie(0)->sync_with_stdio(0)

int main() {
	fastIO;
	int TC = 1;
	// cin >> TC;
	while (TC--) {
		int n, m;
		cin >> n >> m;
		int mx = -1, pos = 1;
		for (int i = 0; i < n; ++i) {
			int t; cin >> t;
			t = (t + m - 1) / m;
			if (mx <= t)
				mx = t, pos = i + 1;
		}
		cout << pos << endl;
	}
	return 0;
}
