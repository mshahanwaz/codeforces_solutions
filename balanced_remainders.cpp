#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO() cin.tie(0)->sync_with_stdio(0);

int main() {
    fastIO();
	int TC = 1;
    cin >> TC;
	while (TC--) {
		int n;
		cin >> n;
		vector<int> a(n), c(3);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			++c[a[i] % 3];
		}
		int ans = 0;
		while (*min_element(c.begin(), c.end()) != n / 3) {
			for (int i = 0; i < 3; ++i) {
				if (c[i] > n / 3) {
					++ans;
					--c[i];
					++c[(i + 1) % 3];
				}
			}
		}
		cout << ans << endl;
    }
	return 0;
}

