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
		int ans = -1;
		if (m % n == 0) {
			int div = m / n, cnt = 0;
			while (div && div % 2 == 0) {
				div /= 2;
				++cnt;
			}
			while (div && div % 3 == 0) {
				div /= 3;
				++cnt;
			}
			if (div == 1) ans = cnt;
		}
		cout << ans << endl;
	}
	return 0;
}
