#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO() cin.tie(0)->sync_with_stdio(0);

int main() {
    fastIO();
	int tc = 1;
    cin >> tc;
	while (tc--) {
		int d;
		cin >> d;
		vector<int> p;
		for (int i = d + 1; ; ++i) {
			int t = 1;
			for (int j = 2; j * j <= i; ++j) {
				if (i % j == 0) {
					t = 0;
					break;
				}
			}
			if (t) {
				p.emplace_back(i);
				break;
			}
		}
		for (int i = p.back() + d; ; ++i) {
			int t = 1;
			for (int j = 2; j * j <= i; ++j) {
				if (i % j == 0) {
					t = 0;
					break;
				}
			}
			if (t) {
				p.emplace_back(i);
				break;
			}
		}
		ll ans = p[0] * min(p[1], p[0] * p[1]);
		cout << ans << endl;
	}
	return 0;
}

