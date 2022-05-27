#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO cin.tie(0)->sync_with_stdio(0)
#define sz(x) (int)x.size()

int main() {
	fastIO;
	int TC = 1;
	// cin >> TC;
	while (TC--) {
		int n;
		cin >> n;
		int cnt = 1, num = 1;
		map<int, bool> m;
		while (sz(m) != n - 1) {
			num += cnt;
			num %= n - 1;
			m[num] = true;
			cout << num + 1 << ' ';
			++cnt;
		}
	}
	return 0;
}
