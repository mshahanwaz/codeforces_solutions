#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define fastIO cin.tie(0)->sync_with_stdio(0)

int main() {
	fastIO;
	int TC = 1;
	cin >> TC;
	while (TC--) {
		int n;
		cin >> n;
		int p = 0, c = 0;
		bool flag = true;
		for (int i = 0; i < n; ++i) {
			int x, y;
			cin >> x >> y;
			if (x < p || y < c || y - c > x - p)
				flag = false;
			p = x, c = y;
		}
		puts(flag ? "YES" : "NO");
	}
	return 0;
}
